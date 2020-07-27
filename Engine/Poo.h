#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vect2.h"

class Poo
{
public:
	void Init( const Vect2& pos_in, const Vect2& vel_in );
	void Update( float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vect2 pos;
	Vect2 vel;
	static constexpr float width = 24;
	static constexpr float height = 24;
	bool initialized = false;
};