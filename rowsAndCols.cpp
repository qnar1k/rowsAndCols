#include <iostream>
#include <sstream>  
#include <string>
using namespace std;

int main() {

    char mat[50][50] = { ' ' };
    string text;

    cout << "Enter the text" << endl;
    getline(cin, text);
    cout << "Source data: " << text << endl;

    int size;
    cout << "Enter the table size" << endl;
    cin >> size;

    int k = 0, y = 0;
    while (k < text.length()) {
        for (int x = 0; x < size; x++) {
            if (k < text.length()) {
                mat[y][x] = text[k++];
            }
            else {
                mat[y][x] = ' ';
            }
        }
        y++;
    }

    cout << endl;

    for (int i = 0; i < y; i++) {
        for (int h = 0; h < size; h++) {
            cout << mat[i][h] << " ";
        }
        cout << endl;
    }

    ostringstream oss;
    for (int i = 0; i < size; i++) {
        for (int h = 0; h < y; h++) {
            if (mat[h][i] != ' ') {
                oss << mat[h][i];
            }
        }
    }
    ostringstream oss1;
    for (int i = 0; i < y; i++) {
        for (int h = 0; h < size; h++) {
             oss1 << mat[i][h]; 
        }
    }

    string result = oss.str();
    cout << "Encrypted string: " << endl;
    cout << result << endl;
    string result1 = oss1.str();
    cout << "Decrypted string: " << endl;
    cout << result1;

    return 0;
}
