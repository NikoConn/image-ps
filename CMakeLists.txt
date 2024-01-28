set(IMAGE_SOURCES
    image/mat.cpp
    image/operations.cpp
)

set(IMAGE_HEADERS
    image/mat.h
    image/operations.h
)

add_library(image ${IMAGE_SOURCES} ${IMAGE_HEADERS})

target_include_directories(image PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link OpenMP
find_package(OpenMP REQUIRED)
target_link_libraries(image PUBLIC OpenMP::OpenMP_CXX)

# Add the test subdirectory
add_subdirectory(test)