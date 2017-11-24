#include <stdio.h>
#include "car.h"


struct CarType {
Type type;
Color color;
int current_speed;
double fill_level;
double acceleration_rate;
};
struct RentalRecord{
  Car car;
  bool is_rent;
};
static struct CarType a = {AIXAM, RED, 0, 16.0, 0.0};
static struct CarType b = {FIAT_MULTIPLA, GREEN, 0, 65.0, 0.0};
static struct CarType c = {FIAT_MULTIPLA, BLUE, 0, 65.0, 0.0};
static struct CarType d = {FIAT_MULTIPLA, ORANGE, 0, 65.0, 0.0};
static struct CarType e= {JEEP, SILVER, 0, 80.0, 0.0};

static RentalRecord car_park[2] = {{&a, false},{&b, false}};

void init(){

}

void init_resets_acceleration_rate(){

}
int get_speed(Car car){
  return 0;
}
void set_acceleration_rate(Car car, int acceleration_rate){

}
double get_fill_level(Car car){
  return car->fill_level;
}
void accelerate(Car car){

}
Car get_car(Type type){
  return &a;
}
Type get_type(Car car){
  return car->type;
}

double get_acceleration_rate(Car car){
  return car->acceleration_rate;
}

Color get_color(Car car){
  return car->color;
}
