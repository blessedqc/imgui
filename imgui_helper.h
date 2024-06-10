#pragma once

namespace ImGuiHelper
{
    inline ImVec4 RgbaToVec4(float r, float g, float b, float a)
    {
        return ImVec4(r / 255.f, g / 255.f, b / 255.f, a / 255.f);
    }
}
