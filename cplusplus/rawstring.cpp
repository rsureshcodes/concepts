#include <iostream>
using namespace std;

int main() 
{
	string path = "C:\Drive\folder";
	cout << "Path = " << path << endl;

	string raw = string(R"(C:\Drive\folder)");
	cout << "raw string = " << raw << endl;
	return 1;
}
