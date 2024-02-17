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

	getline(inFile1, Line1);
	getline(inFile2, Line2);

	while (!inFile1.eof() && !inFile2.eof())
	{
		if (Line1 < Line2)
		{
			outFile << Line1 << endl;
			getline(inFile1, Line1);
		}
		else
		{
			outFile << Line2 << endl;
			getline(inFile2, Line2);
		}
	}

	while (!inFile1.eof())
	{
		outFile << Line1 << endl;
		getline(inFile1, Line1);
	}

	while (!inFile2.eof())
	{
		outFile << Line2 << endl;
		getline(inFile2, Line2);
	}


	inFile1.close();
	inFile2.close();
	outFile.close();

	return 0;
}