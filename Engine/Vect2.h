#pragma once

class Vect2
{
public:
	Vect2() = default;
	Vect2(float x_in, float y_in);
	Vect2 operator+(const Vect2& rhs) const;
	Vect2& operator+=(const Vect2& rhs);
	Vect2 operator* (float rhs) const;
	Vect2& operator*= (float rhs);
	Vect2 operator-(const Vect2& rhs) const;
	Vect2& operator-=(const Vect2& rhs);
	float GetLength() const;
	float GetLengthSq() const;
	Vect2& Normalize();
	Vect2 GetNormalized() const;

public:
	float x; 
	float y;
};