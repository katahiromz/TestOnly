# CMakeLists.txt --- CMake project settings
#    ex) cmake -G "Visual Studio 9 2008" .
#    ex) cmake -DCMAKE_BUILD_TYPE=Release -G "MSYS Makefiles" .
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.0)

# enable testing (CTest)
enable_testing()

# project name and languages
project(TestOnly C CXX)

##############################################################################

# TestOnly.exe
add_executable(TestOnly main.cpp)
#target_link_libraries(TestOnly ...)

# testing
add_test(NAME main_test COMMAND $<TARGET_FILE:TestOnly>)

##############################################################################
