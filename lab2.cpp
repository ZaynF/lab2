#include<iostream>
#include<fstream>
#include"bmi.h"
using namespace std;

int main()
{
	BMI Bmi;
	int i;
	float h,w,b;
	Bmi.h=170;
	Bmi.w=65;
	ifstream filein("file.in");
	ofstream fileout("file.out",ios::out);
	while(filein>>h>>w){
		if(h==0&&w==0)
			break;
		fileout<<Bmi.bmi(h,w)<<" "<<Bmi.category(h,w)<<endl;
	}
	filein.close();
	fileout.close();

	return 0;
}
