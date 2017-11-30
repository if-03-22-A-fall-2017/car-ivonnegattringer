#include <stdio.h>
#include "car.h"

#define amount_of_cars 6

struct CarType {
Type type;
Color color;
double current_speed;
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
static struct CarType f = {JEEP, BLACK, 0, 80.0, 0.0};

static RentalRecord car_park[] = {{&a, false},{&b, false},{&c, false}, {&d, false}, {&e, false}, {&f, false}};

void init(){
  for (int i = 0; i < amount_of_cars; i++) {
    car_park[i].is_rent = false;
    car_park[i].car->current_speed = 0;
    car_park[i].car->acceleration_rate = 0;
  }
}

int get_speed(Car car){
  return round(car -> current_speed);
}
void set_acceleration_rate(Car car, double  acceleration_rate){
  if(car->type == AIXAM && acceleration_rate > 1){
  acceleration_rate = 1;
  }
  else if(car->type == FIAT_MULTIPLA && acceleration_rate > 2.26){
  acceleration_rate = 2.26;
  }
  else if(car->type == JEEP && acceleration_rate > 3.14){
      acceleration_rate = 3.14;
    }
   if(car->type == AIXAM && acceleration_rate < -8){
    acceleration_rate = -8;
  }
  car->acceleration_rate = acceleration_rate;

}
double get_fill_level(Car car){
  return car->fill_level;
}
void accelerate(Car car){
  car->current_speed= (car->acceleration_rate*3.6+ car->current_speed);
  if(car->type == AIXAM && car->current_speed > 45)car->current_speed = 45;
  if(car->type == JEEP && car->current_speed > 196)car->current_speed = 196;
  if(car->type == FIAT_MULTIPLA && car->current_speed > 170) car->current_speed = 170;
}
Car get_car(Type type){
  for (int i = 0; i < amount_of_cars; i++) {
    if(car_park[i].car->type == type && car_park[i].is_rent == false){
      car_park[i].is_rent  = true;
      return car_park[i].car;
    }
  }
  return 0;
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
int round(double speed){
  return (speed+0.5);
}
