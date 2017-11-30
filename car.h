/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

enum Type {AIXAM,
FIAT_MULTIPLA,
JEEP
};

enum Color {RED, GREEN, BLUE, ORANGE, SILVER, BLACK};
typedef struct CarType* Car;

void init();
void set_acceleration_rate(Car car, double acceleration_rate);
double get_fill_level(Car car);
int get_speed(Car car);
double get_acceleration_rate(Car car);
Color get_color(Car car);
Type get_type(Car car);
Car get_car(enum Type);
int round(double speed);

void accelerate(Car car);

#endif
