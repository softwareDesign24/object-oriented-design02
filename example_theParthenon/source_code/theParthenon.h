// theParthenon.h
//


#pragma once
#include <cstddef>

using namespace std;

class theParthenon{

private:
	// the constructor
	// it must be static and non-public
	theParthenon();

	// basic element: it must be static and non-public
	// a pointer to the (one and only) object
	// which is NULL before instantiated 
	static theParthenon* the_unique_instance;

public:
	// basic element: it must be static and public
	// it returns a pointer to the (unique) object or NULL
	static theParthenon* get_the_unique_instance();

	// the destructor
	~theParthenon();

	// a method
	void announcements();
};


