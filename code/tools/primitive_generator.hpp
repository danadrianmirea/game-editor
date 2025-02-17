#pragma once

#include "primitive_geometry.hpp"

namespace tools
{
    class PrimitiveGenerator
    {
    public:
        static debug::geometry create_plane(float x = 1.0f, float z = 1.0f);
        static debug::geometry   create_box(float x = 1.0f, float y = 1.0f, float z = 1.0f);

        static primitive_geometry create_capsule(uint32_t segments = 32, uint32_t rings = 16, float radius = 1.0f, float height = 1.0f);
        static primitive_geometry  create_sphere(uint32_t segments = 32, uint32_t rings = 16, float radius = 1.0f);
    };
}