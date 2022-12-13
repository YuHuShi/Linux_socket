cmake_minimum_required(VERSION 3.0.0)
project(linux_server VERSION 0.1.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -o2 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_exe main.cpp src/server.cpp)