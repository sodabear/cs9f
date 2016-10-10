#include <iostream>
using namespace std;
int out[500];

int main(){
	int firstzero  = 0;
	int input = 0;
	int total = 0;
	int subtotal =0;
	// how to use flay?
	while(cin >> input){
		//checking for total 
		if(input == 0 & firstzero == 1){	
			cout<<"total ="<<total<<endl;
			return 0;

		}
		//checking for subtotal
		if(input == 0 & firstzero == 0){	
			firstzero = 1;
			cout<<"subtotal ="<<subtotal<<endl;
			total = total + subtotal;
			subtotal = 0; 	
		}else{
		//if it is not 0, update firstzero
			firstzero = 0;
		}	
		subtotal = subtotal + input;
		
			
	}
	return 0;
}
