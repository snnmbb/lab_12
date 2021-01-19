#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double ans[])
{
    double max = A[0],min = A[0];
    for(int i=0;i<N;i++)
    { 
        double number1 = number1+pow(A[i],2); 
        ans[0]= A[i]+ans[0];
        ans[1]=sqrt(((number1)/N)-pow((ans[0]/N),2));
        ans[2]=log10(A[i])+ans[2];
        ans[3]=ans[3]+(1/A[i]);
        if(A[i]>max)
        {
            max=A[i];
        } 
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    ans[0]=ans[0]/N;
    ans[2]=pow(10,(ans[2]/N));
    ans[3]=N/ans[3];
    ans[4]=max;
    ans[5]=min; 
}