#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int main() {

	string name1;
	
	cout << "\nHola. Cual es tu nombre?" << endl;
	getline(cin,name1);
	cout << "\nMucho gusto " << name1 << ", espero que todo este bien" << endl;

	return 0;

}