cmake_minimum_required(VERSION 3.20)
project(tower_of_hanoi)

set(CMAKE_CXX_STANDARD 14)

add_executable(tower_of_hanoi main.cpp puzzle.cpp puzzle.h)
