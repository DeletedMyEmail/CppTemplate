cmake_minimum_required(VERSION 3.28)
project(CppTemplate)

#add_compile_definitions(RELEASE) <-- uncomment to remove logging at compile time

FIND_PACKAGE(spdlog REQUIRED)
set(CMAKE_CXX_STANDARD 17)

FILE(GLOB_RECURSE SOURCE "src/*.cpp" "include/*.h" "include/*.hpp" "libs/*.cpp" "libs/*.c" "libs/*.h" "libs/*.hpp")

include_directories("include/" "libs/")
add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME} spdlog::spdlog_header_only)
target_precompile_headers(${PROJECT_NAME} PUBLIC include/pch.h)
set(CMAKE_PCH_INSTANTIATE_TEMPLATES ON)