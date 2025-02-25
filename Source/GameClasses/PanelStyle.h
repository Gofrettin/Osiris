#pragma once

#include <cstdint>

#include <CS2/Classes/Color.h>
#include <CS2/Classes/CUtlVector.h>
#include <CS2/Classes/Panorama.h>

struct PanelStyle {
    explicit PanelStyle(cs2::CPanelStyle* thisptr) noexcept
        : thisptr{ thisptr }
    {
    }

    explicit operator bool() const noexcept
    {
        return thisptr != nullptr;
    }

    void setSimpleForegroundColor(cs2::Color color) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, const cs2::Color* color)>((*reinterpret_cast<void(***)()>(thisptr))[54])(thisptr, &color);
    }

    void setTransform3D(const cs2::CUtlVector<cs2::CTransform3D*>& transforms) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, const cs2::CUtlVector<cs2::CTransform3D*>* transforms)>((*reinterpret_cast<void(***)()>(thisptr))[17])(thisptr, &transforms);
    }

    void setOpacity(float opacity) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, float opacity)>((*reinterpret_cast<void(***)()>(thisptr))[22])(thisptr, opacity);
    }

    void setWidth(cs2::CUILength width) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, cs2::CUILength width)>((*reinterpret_cast<void(***)()>(thisptr))[68])(thisptr, width);
    }

    void setHeight(cs2::CUILength height) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, cs2::CUILength height)>((*reinterpret_cast<void(***)()>(thisptr))[71])(thisptr, height);
    }

    void setZIndex(float zIndex) const noexcept
    {
        // FIXME: hardcoded virtual method index
        reinterpret_cast<void(*)(cs2::CPanelStyle* thisptr, float zIndex)>((*reinterpret_cast<void(***)()>(thisptr))[14])(thisptr, zIndex);
    }

private:
    cs2::CPanelStyle* thisptr;
};
