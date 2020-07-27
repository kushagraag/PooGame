#include "Vect2.h"

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
	return *this + rhs;
}

Vect2 Vect2::operator*(float rhs) const
{
	return Vect2( x * rhs, y * rhs);
}

Vect2& Vect2::operator*=(float rhs)
{
	return *this * rhs;
}
