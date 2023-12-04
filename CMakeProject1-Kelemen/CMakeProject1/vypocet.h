#pragma once
//obvod
double obvodstvorec(double a);
double obvodobdlznik(double a, double b);
double obvodkruh(double r);
double obvodtrojuholnik(double a, double b,double c);
double obvodrovnobeznik(double a, double b);
double obvodlichobeznik(double a, double b, double c,double d);

//obsah
double obsahstvorec(double a);
double obsahobdlznik(double a, double b);
double obsahkruh(double r);
double obsahtrojuholnik(double a, double va);
double obsahrovnobeznik(double a, double va);
double obsahlichobeznik(double a, double c, double va);

//povrch
double povrchkocka(double a);
double povrchkvader(double a, double b, double c);
double povrchgula(double r);
double povrchvalec(double r, double va);
double povrchihlan(double a, double va);
double povrchkuzel(double r, double va);

//objem
double objemkocka(double a);
double objemkvader(double a, double b, double c);
double objemgula(double r);
double objemvalec(double r, double va);
double objemihlan(double a, double va);
double objemkuzel(double r, double va);