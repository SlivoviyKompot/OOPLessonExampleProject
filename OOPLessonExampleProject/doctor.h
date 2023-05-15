#pragma once

#include "main.h"

class Doctor {
private:
	string name;
	string surname;
	int age;
	int experience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, float mark);
	Doctor(string n, string sname);

	~Doctor();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	int get_experience();
	void set_experience(int experience);
	string get_skill();
	void set_skill(int skill);

	void init(string n, string sname, int a, float experience);
	void init_default();
	string convert_to_string();

};

};

