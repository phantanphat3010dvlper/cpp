#include<iostream>
#include<math.h>
using namespace std;

int main()
{	
	double tienkivong;
	double nam;
	double tienvon;
	double laisuat;
	double a,b;
	cout<<"nhap so tien ki vong: ";
	cin>>tienkivong;
	cout<<"nhap so tien von: ";
	cin>>tienvon;
	cout<<"so lai suat: ";
	cin>>laisuat;
	if(tienkivong>tienvon)
	{
	laisuat=double(laisuat/100);
	a=double(tienkivong/tienvon);
	b=double(1+laisuat);
	nam=double(log(a)/log(b));
	cout<<"so nam ki vong la: "<<nam;
	}
	else
	cout<<"khong hop le";
    
	return 0;

}
