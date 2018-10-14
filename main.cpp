#include "miles.h"
using namespace Tasks;

int main (int argc, char const* argv[])
{
	Miles m {10,500};
	m.log();
	
	for(int i=0; i<1000000000000; ++i)
	{
		m.set_miles(m.miles()+i);
		m.set_gallons(m.gallons()+(i*100));
		m.log();
	}
	
	return 0;
}
