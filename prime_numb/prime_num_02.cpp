#include <iostream>
using namespace std;

int main(){
	int n , i , r ;
	cout << "enter a number : " ;
	cin >> n;
for(i=n ;i >1 ; i--)
	{
	
	r= 0 ;
	for(int j =i-1; j> 1;j--){
		r = i%j;
		//cout << " i= " << j<< " , r =" << r << endl;
		if(r==0){
			j=1;
		}
	}
	if(r!=0){
		cout << i<< ", " ;	
	}
}
}

