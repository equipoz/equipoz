#include "PiezaMovil.h"
#include <iostream>

void PiezaMovil::mueve(float t)
{
	Vector2D ruido(0.1f * (0.5f - rand() / ((float)RAND_MAX)), 0);
	posicion = posicion + velocidad * t + aceleracion * 0.5 * t * t + ruido;
	velocidad = velocidad + aceleracion * t + ruido;
}
void PiezaMovil::setPos(float x, float y)
{
	posicion.x = x;
	posicion.y = y;
}

void PiezaMovil::setVel(float vx, float vy)
{
	velocidad.x = vx;
	velocidad.y = vy;
}

Vector2D PiezaMovil::getPos()
{
	return Vector2D(posicion);
}
