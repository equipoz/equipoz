#pragma once

#include "PiezaMovil.h"
#include "ETSIDI.h"
#define MAX_CABALLOS 2
class CaballoN : public PiezaMovil

{
private:
	float altura;
	
public:
	CaballoN(float x=0.0, float y=0.0);
	virtual ~CaballoN();

	void dibuja();
	void mueveC(unsigned char key);


	friend class interaccion;

};