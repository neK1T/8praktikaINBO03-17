#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
	setlocale(LC_ALL, "rus");
	char *buff = new char;
	cin >> buff;
	ofstream fout("file.txt");
	fout << buff;
	fout.close();
	delete buff;
	return 0;
}
