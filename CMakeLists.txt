cmake_minimum_required(VERSION 3.8)
project(Playground)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Exercise1/HelloWorld.cpp Exercise1/helpfunc.cpp Exercise1/helpfunc.h)
add_executable(untitled ${SOURCE_FILES})
