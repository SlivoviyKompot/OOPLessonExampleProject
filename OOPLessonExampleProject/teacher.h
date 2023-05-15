#pragma once

#include "main.h"

class Teacher {
private:
	string name;
	string surname;
	int age;
	int power;

public:
	Teacher();
	Teacher(string n, string sname, int a, float mark);
	Teacher(string n, string sname);

	~Teacher();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	int get_power();
	void set_power(int power);

	void init(string n, string sname, int a, int power);
	void init_default();
	string convert_to_string();

};