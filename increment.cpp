#include<iostream>
using namespace std;
int main()
{
	int a,b,c;      //declared two variables
	cout<<"enter a: ";
	cin>>a;
	cout<<"enter b: ";
	cin>>b;
	a++;            //a incremented 
	b--;            //b decremented
	cout<<a<<endl<<b;
	c=a++ + b--;    //addition of a++ and b--
	cout<<c;
	a--;           //a decremented
	b++;           //b incremented
	cout<<"returned to original values: "<<endl;
	cout<<a<<endl<<b;   //prints original values of a and b entered

}

