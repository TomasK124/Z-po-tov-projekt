#include "vypocet.h" 
#include <math.h>
#include <corecrt_math_defines.h>

//obvod
double obvodstvorec(double a)
{ return 4*a;}
double obvodobdlznik(double a, double b)
{return 2 * (a + b);}
double obvodkruh(double r)
{return 2 * M_PI * r;}
double obvodtrojuholnik(double a, double b, double c)
{return a + b + c;}
double obvodrovnobeznik(double a, double b)
{return 2 * (a + b);}
double obvodlichobeznik(double a, double b, double c, double d)
{return a + b + c + d;}

//obsah
double obsahstvorec(double a)
{return pow(a, 2);}
double obsahobdlznik(double a, double b)
{return a * b;}
double obsahkruh(double r)
{return M_PI * pow(r, 2);}
double obsahtrojuholnik(double a, double va)
{return (a * va) / 2;}
double obsahrovnobeznik(double a,  double va)
{return a * va;}
double obsahlichobeznik(double a, double c, double va)
{return ((a + c) * va) / 2;}

//povrch
double povrchkocka(double a)
{return 6 * pow(a, 2);}
double povrchkvader(double a, double b, double c)
{return 2 * ((a * b) + (b * c) + (c * a));}
double povrchgula(double r)
{return 4 * M_PI * pow(r, 2);}
double povrchvalec(double r, double va)
{return (2 * M_PI * pow(r, 2)) + (2 * M_PI + r + va);}
double povrchihlan(double a, double va)
{return pow(a, 2) + (4 * ((a * va) / 2));}
double povrchkuzel(double r, double va)
{return M_PI * r * (r + (sqrt(pow(r, 2) + pow(va, 2))));}

//objem
double objemkocka(double a)
{return pow(a, 3);}
double objemkvader(double a, double b, double c)
{return a * b * c;}
double objemgula(double r)
{return (4 * M_PI * pow(r, 3)) / 3;}
double objemvalec(double r, double va)
{return M_PI + pow(r, 2) * va;}
double objemihlan(double a, double va)
{return (pow(a, 2) * va) / 3;}
double objemkuzel(double r, double va)
{return (M_PI * pow(r, 2) * va) / 3;}