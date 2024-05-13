include_directories (${CMAKE_CURRENT_LIST_DIR})

file (GLOB_RECURSE vector ${CMAKE_CURRENT_LIST_DIR}/data_structures/vector/*.[ch])

file (GLOB_RECURSE exceptions ${CMAKE_CURRENT_LIST_DIR}/exceptions/*.[ch])

set (libraries
        ${vector}
        ${exceptions}
)