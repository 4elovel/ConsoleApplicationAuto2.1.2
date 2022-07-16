
#include <iostream>

using namespace std;

class Wheel
{
	int vol;
public:
	Wheel(int vol) {
		this->vol = vol;
	};
	void print_wheel_vol() {
		cout << "Wheel: " << vol << " inches" << endl;
	}
};

class Light
{
	int type;
public:
	Light(int type) {
		this->type = type;
	};
	void print_light_type() {
		cout << "Light: " << "Type " << type << endl;
	}
};

class Engine
{
	double value;
public:
	Engine(double value) {
		this->value = value;
	};
	void print_engine_value() {
		cout << "Engine: " << value << " L" << endl;
	}
};

class Chassis
{
	string condition;
public:
	Chassis(string condition) {
		this->condition = condition;
	};
	void print_chassis_condition() {
		cout << "Chassis: " << condition << endl;
	}
};

class Color
{
	string color;
public:
	Color(string color) {
		this->color = color;
	};
	void print_body_color() {
		cout << "Body: " << color << endl;
	}
};


class Machine
{
private:
	static string new_col;
	Color col;
	Chassis chas;
	Engine eng;
	Wheel wheel1, wheel2, wheel3, wheel4;
	Light light1, light2, light3, light4, light5, light6, light7, light8, light9, light10;
public:
	Machine() : col("grey metalic"), chas("normal"), eng(1.5), wheel1(16), wheel2(16), wheel3(16), wheel4(16),
		light1(1), light2(1), light3(2), light4(2), light5(3), light6(3), light7(4), light8(4), light9(5), light10(5) {

	};
	Machine(const Machine& other) : col(other.new_col), chas(other.chas), eng(other.eng), wheel1(other.wheel1), wheel2(other.wheel2), wheel3(other.wheel3), wheel4(other.wheel4),
		light1(other.light1), light2(other.light2), light3(other.light3), light4(other.light4), light5(other.light5), light6(other.light6), light7(other.light7), light8(other.light8), light9(other.light9), light10(other.light10) {
		cout << "copying..." << endl << endl;
	}

	void info() {
		eng.print_engine_value();
		wheel1.print_wheel_vol();
		wheel2.print_wheel_vol();
		wheel3.print_wheel_vol();
		wheel4.print_wheel_vol();
		chas.print_chassis_condition();
		light1.print_light_type();
		light2.print_light_type();
		light3.print_light_type();
		light4.print_light_type();
		light5.print_light_type();
		light6.print_light_type();
		light7.print_light_type();
		light8.print_light_type();
		light9.print_light_type();
		light10.print_light_type();
		col.print_body_color();
		cout << endl;
	}
};

string Machine::new_col = "red";

int main() {
	Machine sedan;
	sedan.info();
	Machine sedan2 = sedan;
	sedan2.info();
	//Sedan.eng.print_engine_value(); вивід стану окремих частин авто
}