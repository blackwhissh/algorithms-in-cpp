#include <bits/stdc++.h>
using namespace std;

//With Indexes


int F[1000];
int n;



int main(){
	
	cin >> n;
	
	F[1] = 1;
	F[2] = 1;
	
	for(int i = 3; i <=n; i++){
		
		F[i] = F[i-1] + F[i-2];
		
	}
	
	cout << F[n];
	
	
}
