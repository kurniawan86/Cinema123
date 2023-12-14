cmake_minimum_required(VERSION 3.26)
project(Cinema123)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cinema123 main.cpp
        Database/DatabaseMember.h
        Model/ModelMember.h)
