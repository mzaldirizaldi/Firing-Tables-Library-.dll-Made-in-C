#include "lib-mortar-firing.h"
#include "math.h"
#include <windows.h>

DLLIMPORT double angle_parabola_mortar(double a, double b) {
	//sin2theta = Xmax * g(10 m/s2) / Vo2
	
	double c = a * 10 / pow(b, 2);
	double d = asin(c); //rad
	double e = 90 - (((180 / M_PI) * d) / 2); //convert to degree
	
	return e; //return degree value
}

