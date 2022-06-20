cmake_minimum_required(VERSION 3.19)
project(SWP_Task_4)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES "src/*.*")
add_executable(SWP_Task_4 ${SOURCES})