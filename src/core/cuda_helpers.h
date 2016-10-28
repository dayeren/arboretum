#ifndef CUDA_HELPERS_H
#define CUDA_HELPERS_H

#include "cuda_runtime.h"

inline __host__ __device__ float2 operator/(float2 a, int b)
{
    return make_float2(a.x / b, a.y / b);
}

inline __host__ __device__ float2 operator*(float2 a, float2 b)
{
    return make_float2(a.x * b.x, a.y * b.y);
}

inline __host__ __device__ float2 operator-(float2 a, float2 b)
{
    return make_float2(a.x - b.x, a.y - b.y);
}

inline __host__ __device__ float2 operator+(float2 a, float2 b)
{
    return make_float2(a.x + b.x, a.y + b.y);
}

inline __host__ __device__ void operator+=(float2 &a, float2 b)
{
  a.x += b.x;
  a.y += b.y;
}

inline __host__ __device__ void init(float2 &v)
{
    v = make_float2(0.0, 0.0);
}

inline __host__ __device__ void init(float &v)
{
    v = 0.0;
}

#endif // CUDA_HELPERS_H