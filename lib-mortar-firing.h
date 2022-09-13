#ifndef _LIBMORTARFIRING_H_
#define _LIBMORTARFIRING_H_

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

DLLIMPORT double angle_parabola_mortar (double a, double b);

#endif
