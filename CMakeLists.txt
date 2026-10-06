cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)

include($ENV{GEODE_SDK}/share/cmake/Geode.cmake)

project(traduccion_espanol VERSION 1.0.0 LANGUAGES CXX)

add_geode_mod(
    ${PROJECT_NAME}
    mod.json
    src/main.cpp
)
