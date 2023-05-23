// main.cpp
// Singleton Design Pattern: the Parthenon

#include "theParthenon.h"
#include <iostream>

using namespace std;

int main() {

	// make the first instance
	theParthenon* p;
	p = theParthenon::get_the_unique_instance();

	// attempt to make the second instance
	theParthenon* second_attempt;
	second_attempt = theParthenon::get_the_unique_instance();

	cout << "The 1st creation attempt Parthenon memory address: " << p << endl;
	cout << "The 2nd creation attempt Parthenon memory address: " << second_attempt << endl;

	p->announcements();

	return 0;
}