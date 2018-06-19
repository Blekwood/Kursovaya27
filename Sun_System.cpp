#include "Comet.h"
#include "Asteroid.h"
#include "Dwarf_Planet.h"
#include "Planet.h"
#include "Sun_System.h"
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

Sun_System::Sun_System() {}

void Sun_System::Create_Sun_System() {
	cout << "�������� ��� �������:\n";
	cout << "|1| - �������\n";
	cout << "|2| - ���������� �������\n";
	cout << "|3| - ��������\n";
	cout << "|4| - ������\n";
	cout << "|0| - �����\n";
	cin >> O_b_j;
	switch (O_b_j) {
	case 1: {
		Planet * O_b_j_1 = new Planet();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 2: {
		Dwarf_Planet * O_b_j_1 = new Dwarf_Planet();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 3: {
		Asteroid * O_b_j_1 = new Asteroid();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}
	case 4: {
		Comet * O_b_j_1 = new Comet();
		O_b_j_1->Vivod_in_not_fail();
		O_b_j_1->Vivod_in_fail();
		delete O_b_j_1;
		break;
	}

	case 0: break;
	}
}

Sun_System::~Sun_System() {
	cout << "����� ������!";

}