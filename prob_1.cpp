#include<iostream>

using namespace std;

void main(){
	
	int sum =0 ;
	
	for(int i =3; i<1000 ;i+=3)
		sum = sum+i;
	
	for(int i =5; i<1000 ;i+=5)
		sum = sum+i;
	
	for(int i =15; i<1000 ;i+=15)
		sum = sum-i;
	
	cout<<sum;
}