#pragma once
#include "../ext/imgui.h"
#include "../ext/imgui_impl_win32.h"
#include "../ext/imgui_impl_dx11.h"


ImVec2 WindowSize = ImVec2(500, 400);

void menu_test()
{
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.2f, 0.2f, 0.2f, 0.7f));

    ImGui::SetNextWindowSize({WindowSize.x, WindowSize.y}, ImGuiCond_Once);
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Once);

    ImGui::Begin(
        "Test Window",
        nullptr,
        ImGuiWindowFlags_MenuBar |
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoMove | 
        ImGuiWindowFlags_NoResize
    );

    ImGui::Text("This is a test window.");
    ImGui::Text("You can add more UI elements here.");

    ImGui::End();
    ImGui::PopStyleColor();
}
