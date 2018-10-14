#ifndef MILES_H_INCLUDED
#define MILES_H_INCLUDED

#include <iostream>
using namespace std;

namespace Tasks{
    class Miles
    {
        public:
        Miles(int,int);
        int miles() const {return m;}
        int gallons() const {return g;}
        double mileage();
        void log();
        
        void set_miles(int);
        void set_gallons(int);

        private:
        int g;
        int m;
    };
}

#endif // MILES_H_INCLUDED
