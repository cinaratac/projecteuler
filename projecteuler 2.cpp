#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a = 1;
	int b = 1;
	int nextfib;
	int sum = 0;
	while (true) {
		nextfib = a + b;
		if (nextfib >= 4000000) break;
	
		if (nextfib % 2 == 0) {
			sum += nextfib;
		}
		a = b;
		b = nextfib;
	
	
	}
	cout << "toplam:" << sum << endl;





}