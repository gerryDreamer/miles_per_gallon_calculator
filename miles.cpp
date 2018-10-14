#include "miles.h"

using namespace std;
using namespace Tasks;

Miles::Miles(int m, int g)
{
    this->m = m;
    this->g = g;
}

double Miles::mileage()
{
    return static_cast<double>(g / m);
}

void Miles::log()
{
    cout << "Miles: "<< miles()
    << " Gallons: "<< gallons()
    << " Mileage: "<< mileage()<<endl;
}

void Miles::set_gallons(int g)
{
	this->g = g; 
}

void Miles::set_miles(int m)
{
	this->m = m;
}
