# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/149/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/149/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mksht80/CLionProjects/TextManipulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mksht80/CLionProjects/TextManipulation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Tex.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Tex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Tex.dir/flags.make

CMakeFiles/Tex.dir/main.cpp.o: CMakeFiles/Tex.dir/flags.make
CMakeFiles/Tex.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mksht80/CLionProjects/TextManipulation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Tex.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Tex.dir/main.cpp.o -c /home/mksht80/CLionProjects/TextManipulation/main.cpp

CMakeFiles/Tex.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Tex.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mksht80/CLionProjects/TextManipulation/main.cpp > CMakeFiles/Tex.dir/main.cpp.i

CMakeFiles/Tex.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Tex.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mksht80/CLionProjects/TextManipulation/main.cpp -o CMakeFiles/Tex.dir/main.cpp.s

# Object files for target Tex
Tex_OBJECTS = \
"CMakeFiles/Tex.dir/main.cpp.o"

# External object files for target Tex
Tex_EXTERNAL_OBJECTS =

Tex: CMakeFiles/Tex.dir/main.cpp.o
Tex: CMakeFiles/Tex.dir/build.make
Tex: CMakeFiles/Tex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mksht80/CLionProjects/TextManipulation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Tex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Tex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Tex.dir/build: Tex

.PHONY : CMakeFiles/Tex.dir/build

CMakeFiles/Tex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Tex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Tex.dir/clean

CMakeFiles/Tex.dir/depend:
	cd /home/mksht80/CLionProjects/TextManipulation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mksht80/CLionProjects/TextManipulation /home/mksht80/CLionProjects/TextManipulation /home/mksht80/CLionProjects/TextManipulation/cmake-build-debug /home/mksht80/CLionProjects/TextManipulation/cmake-build-debug /home/mksht80/CLionProjects/TextManipulation/cmake-build-debug/CMakeFiles/Tex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Tex.dir/depend

