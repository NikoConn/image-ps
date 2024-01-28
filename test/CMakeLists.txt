# Download and configure Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

# Test files
set(TEST_SOURCES
    mat_test.cpp
    operations_test.cpp
    main.cpp
)

# Test executable
add_executable(image-tests ${TEST_SOURCES})

target_include_directories(image-tests PRIVATE ${CMAKE_SOURCE_DIR})

# Link Google Test to the test executable
target_link_libraries(image-tests gtest gtest_main image)