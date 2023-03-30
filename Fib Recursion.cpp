#include <bits/stdc++.h>
using namespace std;


int k,n;

int Fib(int n){
	if(n == 1 || n == 2){
		return 1;
	}else{
		return Fib(n-1) + Fib(n-2);
	}
		
}



int main(){
	
	cin >> n;
	
	k = Fib(n);
	
	cout << k;
	
	
	
	
}
