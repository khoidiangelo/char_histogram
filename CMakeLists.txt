cmake_minimum_required(VERSION 3.25)
project(char_histogram C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_COMPILER clang)

add_executable(char_histogram src/main.c)
