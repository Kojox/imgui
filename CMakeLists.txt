cmake_minimum_required (VERSION 3.2)

project (imgui VERSION 0.0.1 LANGUAGES CXX)

ADD_LIBRARY(imgui
    imconfig.h
    imgui.cpp
    imgui.h
    imgui_demo.cpp
    imgui_draw.cpp
    imgui_internal.h
    imgui_widgets.cpp
    imstb_rectpack.h
    imstb_textedit.h
    imstb_truetype.h
    examples/imgui_impl_opengl3.h
    examples/imgui_impl_opengl3.cpp
    imgui_std.h
    imgui_std.cpp
)

target_include_directories(imgui PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
)

target_link_libraries(imgui Playground_Input)

add_compile_definitions(IMGUI_IMPL_OPENGL_LOADER_GLAD)