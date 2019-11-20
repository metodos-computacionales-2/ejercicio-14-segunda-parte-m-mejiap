#include<iostream>
#include<cmath>
using namespace std;

const double K = 100;
const double M = 2;
const double LAMBDA = 1;
const double DeltaT = 0.01;

double f0(double t, double y0, double y1); // derivada de y0
double f1(double t, double y0, double y1); // derivada de y1
double Euler(double y, double t, double h);

int main(){
    double y=1;
    double v=0;
    double t=0;
    double h=0.01;
    
    cout<<t<<", "<<y<<", "<<v<<endl;
    for(int i=0; i<100; i++){
        t = t + h;
        double yn1,yn2 = Euler(y,v,t,h);
        cout<<t<<", "<<yn1<<", "<<yn2<<endl;
    }
    
    return 0;
}

double Euler(double y01, double y02, double t, double h){
    y01 = y01+(h*f0(y01));
    y02 = y02+(h*f1(y02))
    return y01,y02
}

double f0(double y1)
{
  return y1;
}

double f1(double y0)
{
  return (-K/M)*pow(y0, LAMBDA);
}
