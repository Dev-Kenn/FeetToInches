#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int f, inches;
	
	cout <<"Feet to inches converter\n";
	cout <<"Input number in feet: ";
	cin >>f;
	
	inches= f * 12;
	cout <<"\nFeet to inches is: " <<inches;
	
	return 0;
}
