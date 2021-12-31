#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (0 == n) {
		cout << "divide by zero";
	}
	else {
		cout << "1.00";
	}

	return 0;
}