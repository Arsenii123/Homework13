// Homework13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void diapazon(int num) {
	static int min = 0;
	if (min<num){
		min++;
		cout << min << '\n';
		diapazon(num);
	}
}
void smart_diapazon(int a, int b) {

	if (a > b) {
		a--;
		cout << a << '\n';
		smart_diapazon(a, b);
	}
	else if (b > a) {
		a++;
		cout << a << '\n';
		smart_diapazon(a, b);
	}


}
void stypentwo(int a) {
	if (a % 2 == 0) {
		a= a/2;
		if (a/2 == 1) {
			cout << "YES"<<"\n";
		}
	    if (a % 2 != 0) {
			cout << "NO"<<"\n";
		}
		else { stypentwo(a); }
			
	}

 


}
void summ(int a) {
	static int i = 1;
	static int one = 1;
	static int ten = 1;
	static int hundert = 1;
	i++;
	if (a / 100 == i * 100) {
		hundert = i;
		i = 0;
	}
	else if ((a -hundert*100)/10 == i * 10) {
		ten = i;
		i = 0;
	}
	else if ((a - hundert * 100-ten*10) / 1 == i * 1) {
		one = i;
		i = 0;
	}
	cout << hundert + ten + one;
	summ(a);


}

int main()
{
	//-1
	int number = 5;
	diapazon(number);
	cout << "\n";
	//-2
	smart_diapazon(5, 2);
	cout << "\n";
	smart_diapazon(1, 8);
	//-3
	stypentwo(16);
	cout << "\n";
	stypentwo(31);
	cout << "\n";

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
