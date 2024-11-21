#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void pressEnterToContinue();

int main() {
	string datafile;
	cout << "input file: ";
	getline(cin, datafile);
	pressEnterToContinue();

	return 0; 
}
void pressEnterToContinue() {
	cout << "\npress enter to continue...\n";
	cin.clear();
	while (cin.get() != '\n') continue;
}