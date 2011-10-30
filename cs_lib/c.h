#ifndef C_H 
#define C_H 1

#include <iostream>
#include "a.h"
#include "b.h"

class c : public b
{
public:
	c();
	
	void cheese();
};

#endif