cmake_minimum_required (VERSION 3.9.1)
project(TryingOnCatchAndFakeIt)
set(CMAKE_CXX_STANDARD 17)
set(ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(SOURCE ${ROOT}/source/main.cpp
           ${ROOT}/source/headers/catch.hpp
           ${ROOT}/source/headers/GlobalFunctions.h
           ${ROOT}/source/TESTGlobalMethods.cpp)
add_executable(${CMAKE_PROJECT_NAME} ${SOURCE})

