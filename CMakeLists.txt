cmake_minimum_required ( VERSION 3.1.0 )

project ( RTWeekend
    VERSION 3.0.0
    LANGUAGES CXX
)

set ( CMAKE_CXX_STANDARD 11 )

set ( SOURCE_ONE_WEEKEND 
    src/ray.h
    src/vec3.h
    src/main.cc
)

add_executable(inOneWeekend ${SOURCE_ONE_WEEKEND})