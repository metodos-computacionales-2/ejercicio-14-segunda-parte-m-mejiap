#include<iostream>
#include<cmath>
using namespace std;

double Euler(double y, double t, double h);

int main(){
    double y=1;
    double t=0;
    double h=0.01;
    
    cout<<t<<", "<<y<<endl;
    for(int i=0; i<100; i++){
        t = t + h;
        double yn = Euler(y,t,h);
        cout<<t<<", "<<yn<<endl;
    }
    
    return 0;
}

double Euler(double y, double t, double h){
    return y+(h*sin(ts));
}