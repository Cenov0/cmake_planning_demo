cmake_minimum_required(VERSION 4.0.0)
project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/Cenov0/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)

#变量设置
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
#添加子目录
add_subdirectory(src)