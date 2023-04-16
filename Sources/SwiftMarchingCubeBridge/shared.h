#pragma once

#include <simd/simd.h>

typedef struct {
    simd_float3 pos;
    simd_float3 normal;
    simd_float4 color;
    float weight;
} TableVertex;

typedef struct {
    float isoValue;
    unsigned int GSPAN;
} MarchingCubeControl;

typedef struct {
    int count;
} Counter;
