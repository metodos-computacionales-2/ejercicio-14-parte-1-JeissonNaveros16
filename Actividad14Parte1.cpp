#include<iostream>
#include<cmath>

double f(double y, double t)
{
    return sin(t);
}

double Euler(double y, double t, double h)
{
    return y+h*f(y,t);
}

int main()
{
    double y0 = 0.0;
    double t0 = 0.0;
    double h = 0.001;
    for(int i =0; i<100; i++)
    {
        std::cout << t0 << " " << y0 << std::endl;
        t0 += h;
        y0 = Euler(y0,t0,h);
    }
    return 0;
}