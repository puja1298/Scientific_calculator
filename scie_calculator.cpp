#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double a, b;
    int y;
    void add(double,double);
    void Subtract(double,double);
    void Multiplication(double,double);
    void Division(double,double);
    void power(double,double);
    void sine(double);
    void Cos(double);
    void Tan(double);
    void Squareroot(double);
    void Log(double);
    void Baselog(double);

    cout<<"what you want to calculate."<<endl;
    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for multiplication"<<endl;
    cout<<"press 4 for division"<<endl;
    cout<<"press 5 for power"<<endl;
    cout<<"press 6 for sine"<<endl;
    cout<<"press 7 for cos"<<endl;
    cout<<"press 8 for tan"<<endl;
    cout<<"press 9 for squareroot"<<endl;
    cout<<"press 10 for log"<<endl;
    cout<<"press 11 for baselog"<<endl;

    cin>>y;

    switch(y)
    {
        case 1:
        cout<<"Enter the number for addition."<<endl;
        cin>>a>>b;
        add(a,b);
        break;

        case 2:
        cout<<"enter the two numbers for subtraction."<<endl;
        cin>>a>>b;
        Subtract(a,b);
        break;

        case 3:
        cout<<"Enter the two numbers for multiplication."<<endl;
        cin>>a>>b;
        Multiplication(a,b);
        break;

        case 4:
        cout<<"Enter the two numbers for division."<<endl;
        cin>>a>>b;
        Division(a,b);
        break;

        case 5:
        cout<<"Enter the number for calculating power."<<endl;
        cin>>a;
        cout<<"Enter the power of number."<<endl;
        cin>>b;
        power(a,b);
        break;

        case 6:
        cout<<"Enter the number for calculating sin."<<endl;
        cin>>a;
        sin(a);
        break;

        case 7:
        cout<<"Enter the number for calculating cos."<<endl;
        cin>>a;
        cos(a);
        break;

        case 8:
        cout<<"Enter the number for calculating tan."<<endl;
        cin>>a;
        tan(a);
        break;

        case 9:
        cout<<"Enter the number for calculating squareroot."<<endl;
        cin>>a;
        Squareroot(a);
        break;

        case 10:
        cout<<"Enter the number for calculating log."<<endl;
        cin>>a;
        log(a);
        break;

        case 11:
        cout<<"Enter the number for calculating baselog."<<endl;
        cin>>a;
        Baselog(a);
        break;

        default:
        cout<<"invalid choice!"<<endl;
        break;
    }
    return 0 ;
}
        void add(double x,double z)
        {
            double A;
            A=x+z;
            cout<<"addition:"<<A;
        }

        void Subtract(double x,double z)
        {
            double s;
            s=x-z;
            cout<<"subtraction:"<<s;
        }

        void Multiplication(double x,double z)
        {
            double m;
            m=x*z;
            cout<<"multiplication:"<<m;
        }

        void Division(double x,double z)
        {
            if (z !=0){
            double d;
            d=x/z;
            cout<<"quotient:"<<d;
        }else{
            cout<<"Error:division by zero is not allowed."<<endl;
        }
        }

        void power(double x,double z)
        {
            double p;
            p=pow(x,z);
            cout<<"power:"<<p;
        }

        void sine(double x)
        {
            double s;
            s=sin(x);
            cout<<"sin:"<<s;
        }

        void Cos(double x)
        {
            double c;
            c=cos(x);
            cout<<"cos:"<<c;
        }

        void Tan(double x)
        {
            double t;
            t=tan(x);
            cout<<"tan:"<<t;
        }

        void Squareroot(double x)
        {
            double sq;
            sq=sqrt(x);
            cout<<"square:"<<sq;
        }

        void Log(double x)
        {
            double l;
            l=log(x);
            cout<<"log:"<<l;
        }

        void Baselog(double x)
        {
            double bl;
            bl=log10(x);
            cout<<"baselog:"<<bl;
        }
