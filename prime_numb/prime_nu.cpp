#include <iostream>

using namespace std;

int main(){
	int n , i , r ;
	cout << "enter a number : " ;
	cin >> n;
	
	for(i = n-1; i > 1 ;i--){
		r= n%i;
		cout << " i = "<< i <<  " r = " << r << endl ;
		// to ba able to stop this loop we have created this statment down here 
		if(r ==0 ){
			i = 1;
		}
	}
	if(r == 0){
		cout << "Number is not a prime number : " ;
	}
	else{
		cout << "Number is  prime number : " ;
	}
}
