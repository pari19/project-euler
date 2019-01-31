#include<iostream>

using namespace std;

void main(){
	
	long long int arr[21][21];
	
	for(int i=0 ;i<=20 ;i++){
		
		for(int j=0;j<=20;j++){
			
			if(i == 0 || j==0)
				arr[i][j] = 1;
			
			else
				arr[i][j] = arr[i-1][j] +arr[i][j-1];
		}
	}
	
	cout<<arr[20][20];
}