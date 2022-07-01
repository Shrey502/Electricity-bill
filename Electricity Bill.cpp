#include<iostream>
using namespace std;
int main()
{
   	float ut,amt;
	cout<<"Enter units";
	cin>>ut;
	if(ut<100){
		amt=ut*3.44;
		cout<<"You have to pay Rs3.44 per unit,So you need to pay "<<amt<<"Rs.";
	}
	else if(ut<300){
		amt=ut*7.34;
		cout<<"You have to pay Rs7.34 per unit,So you need to pay "<<amt<<"Rs.";
	}
	else if(ut<500){
		amt=ut*10.36;
		cout<<"You have to pay Rs10.36 per unit,So you need to pay "<<amt<<"Rs.";
	}
	else if(ut<1000){
		amt=ut*11.82;
		cout<<"You have to pay Rs11.82 per unit,So you need to pay "<<amt<<"Rs.";
	}else{
		amt=ut*11.82;
		cout<<"You have to pay Rs11.82 per unit,So you need to pay "<<amt<<"Rs.";
	}
	return 0;
}

