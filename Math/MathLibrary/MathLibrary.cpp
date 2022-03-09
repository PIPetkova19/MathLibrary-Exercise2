#include <iostream>
#include <cmath>
#include "MathLibrary.h"
using namespace std;

float perimeterTriangle(TRIANGLE side)
{
	return side.a + side.b + side.c;
}

float plotTriangle(TRIANGLE side)
{
	float perimeter = perimeterTriangle(side);
	return sqrt(perimeter) + sqrt(perimeter - side.a) + sqrt(perimeter - side.b) + sqrt(perimeter - side.c);
}

