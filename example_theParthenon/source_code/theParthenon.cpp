// theParthenon.cpp
//

#include "theParthenon.h"
#include <iostream>

using namespace std;
// data member
theParthenon* theParthenon::the_unique_instance = NULL;

// the constructor
theParthenon::theParthenon() {};

// the destructor
theParthenon::~theParthenon() {
	delete the_unique_instance;
};

theParthenon* theParthenon::get_the_unique_instance() {
	if (the_unique_instance = NULL) {
		the_unique_instance = new theParthenon();
	}

	return the_unique_instance;
};

void theParthenon::announcements() {
	cout << "\nDear Athenians, we are transmitting from the Parthenon!\n";
};