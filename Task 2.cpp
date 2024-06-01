#include<iostream>
using namespace std;


int main(){
	int a,b,c,choice;
	cout<<"1st Number: "<<endl;
	cin>>a;
	cout<<"2nd Number: "<<endl;
	cin>>b;
	cout<<"1. Addition "<<endl;
	cout<<"2. Subtraction "<<endl;
	cout<<"3. Multiplication "<<endl;
	cout<<"4. Division "<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			c=a+b;
			cout<<"Sum: "<<c<<endl;
			break;
	
	    case 2:
	    	c=a-b;
	    	cout<<"Difference: "<<c<<endl;
	    	break;
	    case 3:
		    c=a*b;
			cout<<"Product: "<<c<<endl;;
			break;
		case 4:
		    c=a/b;
			cout<<"Division: "<<c<<endl;		
	        break;
	    default:
		    cout<<"Invalid Number"<<endl;    
		    break;
		}
	
	return 0;
}
