cmake_minimum_required(VERSION 3.27)
project(laboratory_work_14 C)

set(CMAKE_C_STANDARD 11)

include ("libs/CMakeLists.txt")

set (files
        "main.c"
        ${libraries}
)

add_executable (laboratory_work_14 ${files})

target_sources (laboratory_work_14 PRIVATE ${files})
source_group (TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${files})