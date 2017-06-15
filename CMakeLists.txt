cmake_minimum_required(VERSION 3.7)
project(PAT)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c A+BFormat.c All.h "A+BforPolynomials .c" Emergency.c)
add_executable(PAT ${SOURCE_FILES})