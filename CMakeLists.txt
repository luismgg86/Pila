cmake_minimum_required(VERSION 2.8.9)
project(Pila)

include_directories(include)

set(SOURCES src/Pila.cpp  src/Nodo.cpp src/main.cpp)

add_executable(Pila ${SOURCES})
