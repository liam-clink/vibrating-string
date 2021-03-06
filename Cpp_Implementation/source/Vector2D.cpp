#include "../include/Vector2D.hpp"

std::ostream& operator<<(std::ostream& out, const Vector2D& vec)
{
    out << vec.x << " " << vec.y << '\n';
    return out;
}

// vector addition
// rvalue to avoid unnecessay copying 
Vector2D operator+(const Vector2D& v1, const Vector2D& v2)
{
    return Vector2D(v1.x + v2.x, v1.y + v2.y);
}
Vector2D& operator+=(Vector2D& vlhs, const Vector2D& vrhs)
{
    vlhs = vlhs + vrhs;
    return vlhs;
}
Vector2D operator-(const Vector2D& v1, const Vector2D& v2)
{
    return Vector2D(v1.x - v2.x, v1.y - v2.y);
}

// Vector multiplication (dot product)
double vec_inner(const Vector2D& v1, const Vector2D& v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}
// Scalar multiplication 
Vector2D operator*(Vector2D& vec, const double c)
{
    vec.x *= (double) c;
    vec.y *= (double) c;
    return vec;
}