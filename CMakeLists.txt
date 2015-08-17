cmake_minimum_required(VERSION 3.2)
project(algorithm_data)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES 3/sumup2.c)
add_executable(algorithm_data ${SOURCE_FILES} sample.h sample.cpp)