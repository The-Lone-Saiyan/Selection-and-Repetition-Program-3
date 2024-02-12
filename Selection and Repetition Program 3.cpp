#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

ifstream inFile1, inFile2;
ofstream outFile;
string line1, line2;

int main()
{
	inFile1.open("File 1.txt");
	inFile2.open("File 2.txt");
	getline(inFile1, line1);
	getline(inFile2, line2);
	outFile.open("Merged File.txt");
		outFile << line1 << line2 << endl;

	return 0;
}