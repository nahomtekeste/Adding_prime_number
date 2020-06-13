#include <iostream>
using namespace std;

bool isprimNumber(int n ) {
	
	bool prime = true ;
	
	for(int i =2;i < n && prime ;i++){
		if(n%i==0){
			prime != prime;
		}
	}
	return prime;
}
int main(){
	// in this case i am declearing a value of n in = 27 which is not a prime number 
	// however just chanege the value of a with 11 or anything 
	if(isprimNumber(27)){
		cout <<"prime number " ;
		
	}else{
		cout << "is not a prime number " ;
	}
}
