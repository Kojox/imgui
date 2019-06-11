#pragma once
#include "imgui.h"
#include "imgui_internal.h"
#include <vector>
namespace ImGui
{


	//IMGUI_API bool Combo(const char* label, int* currIndex, std::vector<std::string>& values)
	//{
	//	if (values.empty()) { return false; }
	//	return Combo(label, currIndex, vector_getter,
	//		static_cast<void*>(&values), values.size());
	//}

	IMGUI_API bool ListBoxSTD(const char* label, int* currIndex, std::vector<std::string>& values);


}