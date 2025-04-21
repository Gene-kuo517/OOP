# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <cmath>
#include <iomanip>
double Cylinder :: SurfaceArea()
{
    double sum = 0;
    sum = 2*M_PI*radius*radius + 2*M_PI*radius*height;
    
    return (2.0*M_PI*radius*radius +2.0*M_PI*radius*height);
}

double Cylinder :: Volume()
{
    double sum = 0;
    sum = height*M_PI*radius*radius ;
    
    return (1.0*M_PI*radius*radius*height);
}

double Cylinder :: Circumference()
{
    double sum = 0;
    sum = 2*M_PI*radius;
    return (2.0*M_PI*radius);
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << fixed;
    out.precision(3);
    double c,s,v;
    c = cldr.Circumference();
    s = cldr.SurfaceArea();
    v = cldr.Volume();
    out <<  "Circumference: " <<cldr.Circumference() << endl;
    out << "SurfaceArea: "<<cldr.SurfaceArea()<<endl;
    out << "Volume: "<<cldr.Volume()<<endl;
    return out;
}

# endif
