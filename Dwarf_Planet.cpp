#include "Dwarf_Planet.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;

Dwarf_Planet::Dwarf_Planet() {
	cout << "������������\n";
	cin >> name;
	cout << "���������� �� ������\n";
	cin >> distance;
	cout << "�������\n";
	cin >> size_planet;
	cout << "�� ������� ����� ���������� ������ ������\n";
	cin >> time_rotation;
	cout << "����������� �����������\n";
	cin >> temperature;
	cout << "������\n";
	cin >> radius;
}

void Dwarf_Planet::Vivod_in_not_fail() {
	cout << endl << "������������ - " << name << endl;
	cout << "���������� �� ������ - " << distance << endl;
	cout << "������� - " << size_planet << endl;
	cout << "�� ������� ����� ���������� ������ ������ - " << time_rotation << endl;
	cout << "����������� ����������� - " << temperature << endl;
	cout << "������ - " << radius << endl;
}

void Dwarf_Planet::Vivod_in_fail() {
	ofstream file1("Planet.txt", ios_base::app);
	file1 << "\n---------------------";
	file1 << "\n���������� �������\n";
	file1 << "---------------------" << endl;
	file1 << endl << "������������ - " << name << endl;
	file1 << "���������� �� ������ - " << distance << endl;
	file1 << "������� - " << size_planet << endl;
	file1 << "�� ������� ����� ���������� ������ ������ - " << time_rotation << endl;
	file1 << "����������� ����������� - " << temperature << endl;
	file1 << "������ - " << radius << endl;
	file1 << "\n\n";
	file1.close();
}
Dwarf_Planet::~Dwarf_Planet() {}