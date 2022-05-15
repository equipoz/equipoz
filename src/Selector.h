#pragma once
#include "PiezaMovil.h"

class Selector : public PiezaMovil
{

private:
	float radio;
	unsigned char rojo;
	unsigned char azul;
	unsigned char verde; 

public:
		Selector(float r= 1, float px=2, float py=2);
		virtual~Selector();
	void dibuja(); 
	Vector2D seleccion(unsigned char key);


	friend class interaccion; 
};

