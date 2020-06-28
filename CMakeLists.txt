cmake_minimum_required(VERSION 3.16)

# Set the name of the project here
project(skeleton LANGUAGES C)

set(CMAKE_DISABLE_IN_SOURCE_BUILD ON CACHE BOOL "Prevents cmake -S. -B.")
set(CMAKE_DISABLE_SOURCE_CHANGES ON CACHE BOOL "Prevent writing files to CMAKE_SOURCE_DIR under configure")

# Add all the files in src/
file(GLOB sources CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/src/*.c)

# Create an executable with the same name as the project
add_executable(${PROJECT_NAME})

# Add the source files to the executable
target_sources(${PROJECT_NAME} PRIVATE ${sources})

# Include all the files from the source directory
target_include_directories(${PROJECT_NAME}
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/src>)

# Add flags to the compiler here (these are pedantic flags)
target_compile_options(${PROJECT_NAME} PUBLIC
    $<$<NOT:$<C_COMPILER_ID:MSVC>>:-Wall -Wextra -pedantic>
    $<$<C_COMPILER_ID:MSVC>:/WX /W4>)


