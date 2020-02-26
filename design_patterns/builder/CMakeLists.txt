cmake_minimum_required(VERSION 3.0)

project(builder)

set(SOURCE builder.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})