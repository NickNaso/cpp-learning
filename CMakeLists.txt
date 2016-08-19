cmake_minimum_required(VERSION 3.6)
project(cpp_learning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES ch01/01.cpp)
add_executable(ch01-01 ${SOURCE_FILES})

set(SOURCE_FILES ch01/02.cpp)
add_executable(ch01-02 ${SOURCE_FILES})

set(SOURCE_FILES ch01/03.cpp)
add_executable(ch01-03 ${SOURCE_FILES})

set(SOURCE_FILES ch02/01.cpp)
add_executable(ch02-01 ${SOURCE_FILES})