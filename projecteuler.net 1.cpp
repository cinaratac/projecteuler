// 1000'den küçük olan 3 veya 5'in katlarının toplamını bulun.
#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 1000; i++) {
		if (i % 5 == 0 && i % 3 == 0) {
			cout << i << endl;
		}
	}
}
