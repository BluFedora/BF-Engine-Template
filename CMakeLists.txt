cmake_minimum_required(VERSION 3.12)

project(SampleProject)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/")

add_executable(
  SampleProgram
  "Source/main.cpp"
)

target_link_libraries(
  SampleProgram
  PRIVATE
    BF_Core
)

set_target_properties(SampleProgram PROPERTIES CXX_STANDARD 17)

add_subdirectory(ThirdParty/BluFedoraEngine)
