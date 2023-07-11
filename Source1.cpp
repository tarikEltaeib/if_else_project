#include<iostream>
using namespace std;
// Making a decision-if statement example 
int main() {
	char grade;
	cout << "Enter student grade " << endl;
	cin >> grade;
	//if ((grade == 'A') || grade == 'B' || grade == 'C' )
	//	cout << "You passed the exam. " << endl;
	//else 
	////You do not pass the exam.
	//	cout << "ou do not pass the exam. " << endl;
    grade=='A'||grade=='B'?cout<< "You passed the exam. ": cout << "You do not pass the exam. " << endl;


	return 0;
}
