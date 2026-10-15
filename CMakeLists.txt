cmake_minimum_required(VERSION 3.21)
project(headphones LANGUAGES CXX)

set(CMAKE_PREFIX_PATH "C:/Qt/6.12.0/msvc2022_64")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Bluetooth)
qt_standard_project_setup()

qt_add_executable(headphones src/main.cpp)
target_link_libraries(headphones PRIVATE Qt6::Widgets Qt6::Bluetooth)

add_custom_command(TARGET headphones POST_BUILD
    COMMAND "${CMAKE_PREFIX_PATH}/bin/windeployqt.exe" "$<TARGET_FILE:headphones>")