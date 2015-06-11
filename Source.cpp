#include <iostream>
#include <string>

using namespace std;

void main()
{
	char cipher[6][6];
	bool used[36];

	string key;
	string plaintext;
	string ciphertext;

	//get the key
	cout << "Please enter the key: ";
	getline(cin, key);
	cout << endl;

	//get the plaintext
	cout << "Please enter the plaintext: ";
	getline(cin, plaintext);
	cout << endl;

	//encode the plaintext

	//display the encrypted message

	system("pause");
}