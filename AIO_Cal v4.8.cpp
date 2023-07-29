/*Terminal Based All In One Calculator in C++*/

#include<iostream>
#include<math.h>
#include<unistd.h>
#include<stdlib.h>
#include <cstdlib>
unsigned int microsecond = 1000000;
//#include <windows.h>
//usleep(3 * microsecond); //sleeps for 3 seconds
//sleep(3);


using namespace std;

void ADD();
void SUB();
void MUL();
void DIV();
void SQU();
void SQRT();
void CUB();
void FACT();
//int EXT(int e);

int main(void)
{
    int n, s, e=0;
    float ver=4.8;
    float a, b, c;
    system ("clear");
    cout<<"\nComplex Calculator "<<ver<<endl;
    cout<<"\nLoading: [=                               ] 1%";
    sleep(1);
    system ("clear");
    cout<<"\nComplex Calculator "<<ver<<endl;
    cout<<"\nLoading: [=======                         ] 55%";
    sleep(1);
    system ("clear");
    cout<<"\nComplex Calculator "<<ver<<endl;
    cout<<"\nLoading: [=============================== ] 97%";
    system ("clear");
    sleep(2);
    
    cout<<"\nRefreshing Screen..."<<endl;
    sleep(3);
    system ("clear");
    cout<<"\nComplex Calculator "<<ver<<endl;
    cout<<"\nLoaded: [================================] 100% "<<endl;
    sleep(1);
    cout<<"\nChoose Operation: \n1. Addition \n2. Subtraction \n3. Multiplication ";
    cout<<"\n4. Division \n5. Square of a Number \n6. Square Root of a Number";
    cout<<"\n7. Cube of a Number \n8. Factorial of a Number"<<endl;
    cout<<"\nType the number next to the Operation= ";
    cin>>n;

    switch(n)
    {
        case 1: //Addition
        ADD();

        break;

        case 2: //Subtraction
        SUB();
        break;

        case 3: //Multiplication
        MUL();
        break;

        case 4: //Division
        DIV();
        break;

        case 5: //square of a number
        SQU();
        break;

        case 6: //Square root of a number
        SQRT();
        break;

        case 7:  //Cube of a number
        CUB();
        break;

        case 8:
        FACT();
        break;

    default:
    cout<<"\nINVALID INPUT! \nMore Operations Coming Soon..."<<"\b \b"<<endl;
}

}


void ADD()      //Addition
{
    //int e;
    float a,b,c;
    cout<<"\nAddition:"<<endl;
    cout<<"Enter two numbers 'A' and 'B'"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"\n"<<a<<" + "<<b<<" = "<<c<<endl;
}

void SUB()       //Subtraction
{
    float a, b, c;
    cout<<"\nSubtraction:"<<endl;
    cout<<"Enter two numbers 'A' and 'B'"<<endl;
    cin>>a>>b;
    c=a-b;
    cout<<"\n"<<a<<" - "<<b<<" = "<<c<<endl;
}

void MUL()      //Multiplication
{
    float a, b, c;
    cout<<"\nMultiplication:"<<endl;
    cout<<"Enter two numbers 'A' and 'B'"<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<"\n"<<a<<" x "<<b<<" = "<<c<<endl;
}

void DIV()       //Division
{
    float a, b, c;
    cout<<"\nDivision:"<<endl;
    cout<<"Enter the Numerator and then the Denominator"<<endl;
    cin>>a>>b;
    c=a/b;
    cout<<"\n"<<a<<"/"<<b<<" = "<<c<<endl;
}

void SQU()       //Square of a Number
{
    int y=2;
    float r, x;
    cout<<"\nSquare of a Number:"<<endl;
    cout<<"Enter a Number to Find it's Square"<<endl;
    cin>>x;
    r=pow(x,y);
    cout<<"\nThe Square of "<<x<<" is "<<r<<endl;
}

void SQRT()      //Square Root of a Number
{
    float x,r;
    cout<<"\nSquare Root of a Number:"<<endl;
    cout<<"Enter a Number to find it's Square Root"<<endl;
    cin>>x;
    r=sqrt(x);
    cout<<"\nThe Square root of "<<x<<" is "<<r<<endl;
}

void CUB()       //Cube of a Number
{
    int y=3;
    float r, x;
    cout<<"\nCube of a Number: "<<endl;
    cout<<"Enter a Number to Find it's Cube"<<endl;
    cin>>x;
    r=pow(x,y);
    cout<<"\nThe Cube of "<<x<<" is "<<r<<endl;
}

void FACT()
{
    int n, f=1, i;
    cout<<"\nEnter a Number to find it's factorial: ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    cout<<"The Factorial of '"<<n<<"' is "<<f<<endl;
    cout<<endl;
}


