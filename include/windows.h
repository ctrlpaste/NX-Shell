#ifndef NX_SHELL_WINDOWS_H
#define NX_SHELL_WINDOWS_H

#include "gui.h"
#include "imgui.h"
#include "textures.h"

namespace Windows {
    inline void SetupWindow(void) {
        ImGui::SetNextWindowPos(ImVec2(0.0f, 0.0f), ImGuiCond_Once);
        ImGui::SetNextWindowSize(ImVec2(1280.0f, 720.0f), ImGuiCond_Once);
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 0.0f);
    };

    void FileBrowserWindow(MenuItem *item, bool *focus, bool *first_item);
    void ImageWindow(MenuItem *item, Tex *texture);
    void SettingsWindow(MenuItem *item);
}

#endif