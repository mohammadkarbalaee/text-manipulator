#include <iostream>
#include "stdio.h"
#include "cstring"
char* string_replace(char* source, size_t sourceSize, char* substring, char* with);
using namespace std;

int main()
{
    int lines = 0;
    cout << "how many lines are you going to type?\n";
    cin >> lines;
    char text[lines+1][10000];
    cout << "you can type " << lines << " lines\n";
    for (int i = 0; i <= lines; ++i)
    {
        gets(text[i]);
    }
    for (int i = 0; i <= lines; ++i)
    {
        int len = strlen(text[i]);
        for (int j = 0;j < len; ++j)
        {
            while (isspace(text[i][j]) && isspace(text[i][j+1]))
            {
                for (int k = j + 1;k < len; ++k)
                {
                    text[i][k] = text[i][k+1];
                }
            }
        }
    }
    int choice = 0;
    printf("\nwhat can i do for you?\n"
           "1:showing the correct text\n"
           "2:giving details about how many sentences,words or characters your text has\n"
           "3:showing you the occurences of a word in the text\n"
           "4:deleting a word from text\n"
           "5:encrypt the text\n"
           "6:decrypt the text\n"
           "7:making the first letter of each sentence uppercase\n"
           "8:replacing one word with another\n"
           "9:terminate the app\n"
    );
    while (choice != 9)
    {
        scanf("%d",&choice);
        if (choice == 1)
        {
            cout << "\nadditional spaces deleted:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else if (choice == 2)
        {
            int sentences = 0;
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                for (int j = 0;j < len; ++j)
                {
                    if (text[i][j] == '.')
                    {
                        sentences++;
                    }
                }
            }
            int words = 0;
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                for (int j = 0;j < len; ++j)
                {
                    if (text[i][j] == 32)
                    {
                        words++;
                    }
                }
            }
            words += lines;
            int characters = 0;
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                characters += len;
            }
            printf("sentences: %d\nwords: %d\ncharacters: %d\n",sentences,words,characters);
        }
        else if (choice == 3)
        {
            cout << "enter the word that you want to search\n";
            char searchWord[100];
            scanf("%s",searchWord);
            int repeatations = 0;
            for (int i = 0; i <= lines; ++i)
            {
                char* token = strtok(text[i]," ");
                while (token != NULL)
                {
                    if (strcmp(token,searchWord) == 0)
                    {
                        repeatations++;
                    }
                    token = strtok(NULL, " ");
                }
            }
            if (repeatations == 0)
            {
                cout << "that word is not in this text" << endl;
            }
            else
            {
                cout << "repeatations: " << repeatations << endl;
            }
        }
        else if (choice == 4)
        {
            cout << "enter the word that you want to delete\n";
            char searchWord[100];
            char blank[] = {""};
            scanf("%s",searchWord);
            for (int k = 0; k <= lines; ++k)
            {
                string_replace(text[k], strlen(text[k]),searchWord,blank);
            }
            cout << "\ntext after deletation:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else if (choice == 5)
        {
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                for (int j = 0;j < len; ++j)
                {
                    text[i][j] += 5;
                }
            }
            cout << "\nencrypted text:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else if (choice == 6)
        {
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                for (int j = 0;j < len; ++j)
                {
                    text[i][j] -= 5;
                }
            }
            cout << "\ndecrypted text:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else if (choice == 7)
        {
            for (int i = 0; i <= lines; ++i)
            {
                int len = strlen(text[i]);
                if (!(text[i][0] >= 65 && text[i][0] <= 90) && (text[i][0] >= 97 && text[i][0] <= 122))
                {
                    text[i][0] -= 32;
                }
                for (int j = 0;j < len; ++j)
                {
                    if (!(text[i][j+1] >= 65 && text[i][j+1] <= 90) && (text[i][j+1] >= 97 && text[i][j+1] <= 122) && text[i][j] == '.')
                    {
                        text[i][j+1] -= 32;
                    }
                }
            }
            cout << "\nuppercased text:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else if (choice == 8)
        {
            cout << "enter the word that you want to get replaced\n";
            char replaced[100];
            scanf("%s",replaced);
            cout << "enter the word that you want to replace the other with\n";
            char replacing[100];
            scanf("%s",replacing);
            for (int i = 0; i <= lines; ++i)
            {
                string_replace(text[i], strlen(text[i]),replaced,replacing);
            }
            cout << "\nreplaced text:";
            for (int i = 0; i <= lines; ++i)
            {
                printf("%s\n",text[i]);
            }
        }
        else
        {
            cout << "have a nice time\n";
            break;
        }
    }
}

char* string_replace(char* source, size_t sourceSize, char* substring, char* with)
{
    char* substring_source = strstr(source, substring);
    if (substring_source == NULL)
    {
        return NULL;
    }

    if (sourceSize < strlen(source) + (strlen(with) - strlen(substring)) + 1)
    {
        printf("Buffer size is too small\n");
        return NULL;
    }

    memmove(
            substring_source + strlen(with),
            substring_source + strlen(substring),
            strlen(substring_source) - strlen(substring) + 1
    );

    memcpy(substring_source, with, strlen(with));
    return substring_source + strlen(with);
}