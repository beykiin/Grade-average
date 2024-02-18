#include <iostream>
using namespace std;

int main() {

	int numberOfLessons;

	cout << "Enter the number of lesseon:";
	cin >> numberOfLessons;

	int totalGrade = 0;

	for (int i = 1; i <= numberOfLessons; i++) {
		
		int grade;

		cout << "Enter the grade for lessons:" << i << ":";
		cin >> grade;
		totalGrade += grade;
		}

	double average = static_cast<double>(totalGrade) / numberOfLessons;

	cout << "Average of grade:" << average << endl;

	return 0;

	}



