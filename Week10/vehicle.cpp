#include "vehicle.h"


vehicle::vehicle(){
	this->set_has_name(false);
}
vehicle::vehicle(int wn, int ms){
	this->set_wheel_number(wn);
	this->set_max_speed(ms);
}
vehicle::vehicle(int wn, int ms, bool hn){
	this->set_has_name(hn);
	this->set_wheel_number(wn);
	this->set_max_speed(ms);
}

int vehicle::get_wheel_number(){
	return this->wheel_number;
}
int vehicle::get_max_speed(){
	return this->max_speed;
}
bool vehicle::get_has_name(){
	return this->has_name;
}
const char* vehicle::get_class_name(){
	return "vehicle";
}

void vehicle::set_wheel_number(int wn){
	this->wheel_number = wn;
}
void vehicle::set_max_speed(int ms){
	this->max_speed = ms;
}
void vehicle::set_has_name(bool hn){
	this->has_name = hn;
}
