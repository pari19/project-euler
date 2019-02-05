#include<iostream>

using namespace std;

void main(){
	
	int term1 =1;
	int term2 =2;
	int sum = term2;
	int nextTerm =0;
	
	while(nextTerm <= 4000000){
		
		nextTerm = term1+term2;
		term1 = term2;
		term2 = nextTerm;
		
		if(nextTerm%2 == 0){
			sum = sum+nextTerm;
		}
	}
	
	cout<<sum;
	
}