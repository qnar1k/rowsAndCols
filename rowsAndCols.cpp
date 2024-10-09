#include <iostream>
#include <sstream>  
#include <string>
using namespace std;

int main() {

	char mat[10][10] = { 0 };
	string text;

	cout << "Enter the text" << endl;
	getline(cin, text);
	cout << "Source data: " << text << endl;
	

	int size;
	cout << "Enter the table size" << endl;
	cin >> size;

	int k = 0, y = 0;
	while (k != 12) {
		for (int x = 0; x < size;x++) {
			mat[y][x] = text[k++];
		}
		y++;
	}

	cout << endl;

	for (int i = 0; i < y; i++) {
		for (int h = 0; h < size; h++){
			cout << mat[i][h] << " ";
		}
		cout << endl;
	}

	ostringstream oss;
	for (int i = 0; i < size; i++) {
		for (int h = 0; h < y; h++) {
			oss << mat[h][i];
		}
	}

	string result = oss.str();
	cout << "Encrypted string: " << endl;
	cout << result;


	return 0;

		
}
