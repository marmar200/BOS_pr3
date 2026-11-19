cmake_minimum_required(VERSION 3.10)

set(TARGET pr3)

project(${TARGET} C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(${TARGET})

target_sources(${TARGET} PRIVATE
    src/main.c
    src/task1.c
    src/task1.h
    src/task2.c
    src/task2.h
    src/task3.c
    src/task3.h
    src/task4.c
    src/task4.h
)

target_include_directories(${TARGET} PRIVATE src)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU" OR CMAKE_C_COMPILER_ID STREQUAL "Clang")
    target_compile_options(${TARGET} PRIVATE -Wall -Wextra -Wpedantic)
endif()

if(UNIX)
    target_link_libraries(${TARGET} PRIVATE m)
endif()
