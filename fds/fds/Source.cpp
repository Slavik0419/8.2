#include <iostream>
#include <string>

using namespace std;


string Deleted(string& s)

{

	int pos1 = s.find_first_of("(", 0);
	
	int pos2 = s.find_last_of(")");

	if (pos1 == -1 || pos2 == -1)
	{
		cout << "nema (((( ";
		
	}
	else {
		s = s.erase(pos1, pos2 - pos1+1);
		return s;
	}
	
}

int main()
{
	size_t pos1 = 0;
	size_t pos2 = 0;
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "result= " << Deleted(str) <<endl;
	
}
