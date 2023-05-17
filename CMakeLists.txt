cmake_minimum_required(VERSION 3.0)
project(FdTest C)

# Set the source file
set(SOURCE_FILE fdtest.c)

# Create the executable
add_executable(${PROJECT_NAME} ${SOURCE_FILE})
