#include <iostream>
using namespace std;

float sum(float a, float b){

	float c;
	c = a + b;
	return(c);
}

float sub(float d, float e){

	float f;
	f = d - e;
	return(f);
}

int multi(int t, int g){

	int h;
	h = t * g;
	return(h);
}

int div(int x, int y){

	int z;
	z = x / y;
	return(z);
}

int main(){

	float a, b, c, d, e, f, g, h;
	int uservalue;
	string ans, ans2, ans3, ans4;
	const string YES = "y";
	const string NO = "n";
	
	asktheuser:
	
	cout << "\n 1 - Addition\n 2 - Subtraction\n 3 - Multiplication\n 4 - Division\n 5 - Exit Program\n" << endl;
	cout << "Choose a number: ";
	cin >> uservalue;
	
	switch (uservalue){
		case 1:
			cout << "Number 1 is addition";
			cout << "\nSelect first number: ";
			cin >> a;
			cout << "\nSelect second number: "; 
			cin >> b;
			cout << "The sum of the two number is: " << sum(a,b) << endl;
			cout << "Do you wanna do more calcs? (y/n) ";
			cin >> ans;
			if (ans == YES)
			{
				goto asktheuser;
			}else{
				break;
			}	
		case 2:
			cout << "Number 2 is subtraction";
			cout << "\nSelect first number: ";
			cin >> c;
			cout << "\nSelect second number: "; 
			cin >> d;
			cout << "The subtraction of the two number is: " << sub(c,d) << endl;
			cout << "Do you wanna do more calcs? (y/n) ";
			cin >> ans2;
			if (ans2 == YES)
			{
				goto asktheuser;
			}else{
				break;
			}
			break;
		case 3:
			cout << "The number 3 is multiplication";
			cout << "\nSelect first number: ";
			cin >> e;
			cout << "\nSelect second number: "; 
			cin >> f;
			cout << "The multiplication of the two number is: " << multi(e,f) << endl;
			cout << "Do you wanna do more calcs? (y/n) ";
			cin >> ans3;
			if (ans3 == YES)
			{
				goto asktheuser;
			}else{
				break;
			}
			break;	
		case 4:
			cout << "The number 4 is division";
			cout << "\nSelect first number: ";
			cin >> g;
			cout << "\nSelect second number: "; 
			cin >> h;
			cout << "The multiplication of the two number is: " << div(g,h) << endl;
			cout << "Do you wanna do more calcs? (y/n) ";
			cin >> ans4;
			if (ans4 == YES)
			{
				goto asktheuser;
			}else{
				break;
			}
			break;	
		case 5:
			cout << "\n Exiting Program, bye!";
			break;	
		default:
			cout << "Wrong number, Select another one!";
			goto asktheuser;

	}

cin.ignore();
return 0;

}
