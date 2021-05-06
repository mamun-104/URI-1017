#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    int s,v,t;
    double result;
    cin>>t>>v;

    s = v * t;
    result = (double)s/12.00;

    cout << fixed<<setprecision(3)<< result <<endl;



    return 0;
}



