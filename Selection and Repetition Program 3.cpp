#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

ifstream inFile1, inFile2;
ofstream outFile;
string Line1, Line2;

int main()
{
	inFile1.open("File 1.txt");
	inFile2.open("File 2.txt");
	
	outFile.open("Merged File.txt");

	while (!inFile1.eof() && !inFile2.eof())
	{
		getline(inFile1, Line1);
		getline(inFile2, Line2);
			
		outFile << Line1 << endl;
		outFile << Line2 << endl;	
	}

	inFile1.close("File 1.txt");
	return 0;
}