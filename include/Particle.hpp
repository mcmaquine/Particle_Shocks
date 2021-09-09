#ifndef PARTICLE_HPP
#define PARTICLE_HPP
#include	<SFML/Graphics.hpp>

class Particle
{

	public:
		Particle(float radius, float _mass);
		~Particle();

		float getX();
		float getY();
		float getRadius();

		void setX( float _x );
		void setY( float _y );		
		void setRadius( float radius );
		
		/**
         	* @brief Atualiza a posição da partícula onde ela foi renderizada
         	*/
		void updatePos( float _x, float _y );

		sf::CircleShape shape;

	private:
		float mass = 1.0f;
		float radius;
		float y;
		float x;
		float vx;
		float vy;
};

#endif

/*                 *
* Impelmentation   *
*/        

Particle::Particle( float _radius, float _mass )
{
	radius = _radius;
	shape.setRadius( radius );
	mass = _mass;
	x = _radius;
	y = _radius;
}

Particle::~Particle()
{
}

float Particle::getX()
{
	return x;
}

float Particle::getY()
{
	return y;
}

float Particle::getRadius()
{
	return radius;
}

void Particle::setX( float _x )
{
	x = _x;
	return;
}

void Particle::setY( float _y )
{
	y = _y;
	return;
}

void Particle::setRadius( float r )
{
	radius = r;
	shape.setRadius( radius );
	return;
}

void Particle::updatePos( float _x, float _y)
{
	x = _x - radius;
	y = _y - radius;
	shape.setPosition( x, y );
	return;
}
