cmake_minimum_required(VERSION 3.16)
project(app LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_CXX_EXTENSIONS OFF)

include(FetchContent)

FetchContent_Declare(flags
        GIT_REPOSITORY https://github.com/sailormoon/flags
        GIT_TAG master)
FetchContent_MakeAvailable(flags)

include_directories(src)

add_executable(app src/main.cpp)
target_compile_features(app PRIVATE cxx_std_23)

target_link_libraries(app PRIVATE flags)

install(TARGETS app)
