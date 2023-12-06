#include<iostream>
using namespace std;
char a;
char input()
{
	cin >> a;
	return a;
}
void convert()
{
	if (islower(a)){
		char b = int(a) - 32;
	cout << b;
}
	else if (isupper(a)) {
		char b = int(a) + 32;
		cout << b;
	}
}
 int main() {
	 input();
     convert();
 }