# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CPP\CppSchoolTask

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CPP\CppSchoolTask\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CppSchoolTask.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CppSchoolTask.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CppSchoolTask.dir/flags.make

CMakeFiles/CppSchoolTask.dir/main.cpp.obj: CMakeFiles/CppSchoolTask.dir/flags.make
CMakeFiles/CppSchoolTask.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CPP\CppSchoolTask\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CppSchoolTask.dir/main.cpp.obj"
	C:\Users\YeEeck\Tools\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CppSchoolTask.dir\main.cpp.obj -c E:\CPP\CppSchoolTask\main.cpp

CMakeFiles/CppSchoolTask.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CppSchoolTask.dir/main.cpp.i"
	C:\Users\YeEeck\Tools\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CPP\CppSchoolTask\main.cpp > CMakeFiles\CppSchoolTask.dir\main.cpp.i

CMakeFiles/CppSchoolTask.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CppSchoolTask.dir/main.cpp.s"
	C:\Users\YeEeck\Tools\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CPP\CppSchoolTask\main.cpp -o CMakeFiles\CppSchoolTask.dir\main.cpp.s

# Object files for target CppSchoolTask
CppSchoolTask_OBJECTS = \
"CMakeFiles/CppSchoolTask.dir/main.cpp.obj"

# External object files for target CppSchoolTask
CppSchoolTask_EXTERNAL_OBJECTS =

CppSchoolTask.exe: CMakeFiles/CppSchoolTask.dir/main.cpp.obj
CppSchoolTask.exe: CMakeFiles/CppSchoolTask.dir/build.make
CppSchoolTask.exe: CMakeFiles/CppSchoolTask.dir/linklibs.rsp
CppSchoolTask.exe: CMakeFiles/CppSchoolTask.dir/objects1.rsp
CppSchoolTask.exe: CMakeFiles/CppSchoolTask.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CPP\CppSchoolTask\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CppSchoolTask.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CppSchoolTask.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CppSchoolTask.dir/build: CppSchoolTask.exe

.PHONY : CMakeFiles/CppSchoolTask.dir/build

CMakeFiles/CppSchoolTask.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CppSchoolTask.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CppSchoolTask.dir/clean

CMakeFiles/CppSchoolTask.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CPP\CppSchoolTask E:\CPP\CppSchoolTask E:\CPP\CppSchoolTask\cmake-build-debug E:\CPP\CppSchoolTask\cmake-build-debug E:\CPP\CppSchoolTask\cmake-build-debug\CMakeFiles\CppSchoolTask.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CppSchoolTask.dir/depend

