#include "Vect2.h"
#include <cmath>

Vect2::Vect2(float x_in, float y_in)
	:
	x(x_in),
	y( y_in)
{
}

Vect2 Vect2::operator+(const Vect2& rhs) const
{
	return Vect2( x + rhs.x, y + rhs.y);
}

Vect2& Vect2::operator+=(const Vect2& rhs)
{
	return *this = *this + rhs;
}

Vect2 Vect2::operator*(float rhs) const
{
	return Vect2( x * rhs, y * rhs);
}

Vect2& Vect2::operator*=(float rhs)
{
	return *this = *this * rhs;
}

Vect2 Vect2::operator-(const Vect2& rhs) const
{
	return Vect2( x - rhs.x, y - rhs.y);
}

Vect2& Vect2::operator-=(const Vect2& rhs)
{
	return *this = *this - rhs;
}

float Vect2::GetLength() const
{
	return std::sqrt(GetLengthSq());
}

float Vect2::GetLengthSq() const
{
	return x * x + y * y;
}

Vect2& Vect2::Normalize()
{
	return *this = GetNormalized();
}

Vect2 Vect2::GetNormalized() const
{
	const float len = GetLength();
	if (len != 0.0f) {
		return *this * (1.0f / len);
	}
	return *this;
}
