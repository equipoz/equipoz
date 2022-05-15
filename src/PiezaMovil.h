#pragma once
#include "Vector2D.h"

class PiezaMovil {
public:
	virtual void mueve(float t);
	void setPos(float x, float y);
	void setVel(float vx, float vy);
	Vector2D getPos();
protected:
	Vector2D posicion;
	Vector2D velocidad;
	Vector2D aceleracion;
};