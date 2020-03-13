cmake_minimum_required(VERSION 3.5)

project(protobuf_mock LANGUAGES CXX)

find_package(Protobuf REQUIRED)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS foo.proto)

include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(protobuf_mock main.cpp ${PROTO_SRCS} ${PROTO_HDRS})
target_link_libraries(protobuf_mock ${Protobuf_LIBRARIES})
