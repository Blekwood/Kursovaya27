#ifndef Dwarf_Planet_H
#define Dwarf_Planet_H

class Dwarf_Planet {
	char name[20];
	char distance[20];
	char size_planet[20];
	char time_rotation[20];
	char temperature[20];
	char radius[20];
public:
	Dwarf_Planet();

	void Vivod_in_not_fail();
	void Vivod_in_fail();
	~Dwarf_Planet();
};

#endif Dwarf_Planet_H