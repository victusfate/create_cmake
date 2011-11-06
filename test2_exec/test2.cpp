#include "a.h"
#include "b.h"
#include "c.h"

int main()
{
	cout << "This is a second exec in the project\n";
	a a1;
	a1.apple();
	
	b b1;
	b1.apple();
	b1.bacon();
	
	c c1;
	c1.apple();
	c1.bacon();
	c1.cheese();
	
	return 0;
}