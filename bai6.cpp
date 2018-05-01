#include<iostream>
#include<conio.h>
using namespace std;

float circarea(float radius);

void main(void)
{
	cout<<"### Programmed By Amahdy(MrJava) ,right restricted.~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout<<"-------------------------------------------------------------------------------\n"<<endl;
	
	float rad;
	
	do{
	cout<<"Enter radius of circle: "; cin>> rad;
	cout <<"Area is "<<circarea(rad);
	cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
	}while(getch()=='c');
}

float circarea(float radius) { return 3.14159F*radius*radius;}
