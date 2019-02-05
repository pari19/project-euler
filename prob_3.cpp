#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(long long int a){
	
	long long int sqrta = sqrt(a);
	
	while(sqrta >1 ){
		
		if((a%sqrta) == 0){
			
			return false;
		}
		
		sqrta--;
	}
	
	return true;
}


void main(){
	
	long long int a =600851475143;
	long long int sqrta = sqrt(a);
	
	while(sqrta >1 ){
		
		if((a%sqrta) == 0){
			
			if(isPrime(sqrta)){
				cout<<sqrta<<endl;
				break;
			}
		}
		
		sqrta--;
	}

}