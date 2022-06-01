#include <iostream>
#include "Dom9.h"

int main()
{
	setlocale(LC_ALL, "rus");
	Property* ar[7];

	ar[0] = new Apartment(10000);
	ar[1] = new Apartment(20000);
	ar[2] = new Apartment(30000);
	ar[3] = new Car(10000);
	ar[4] = new Car(9000);
	ar[5] = new CountryHouse(10000);
	ar[6] = new CountryHouse(10500);
	for (int i = 0; i < 7; i++) {
		ar[i]->nal();
		delete [] ar[i];
	}

}
