#pragma once
#include <stack>
#include <string>

class Calculadora
{
	const std::string nombre;
	const std::string modelo;
public:
	Calculadora(std::string nombre_, std::string modelo_);
	~Calculadora();
	static float sumar(std::stack<float> valores);
	static float restar(float valor1, float valor2);
	static float multiplicar(float valor1, float valor2);
	static float dvidir(float valor1, float valor2);
};
