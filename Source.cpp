#include <iostream>
#include <thread>

int n;

int main() {
	std::cin >> n;
	while (1) {
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = (n * 3)+1;
		}
		std::cout << n << std::endl;
		std::this_thread::sleep_for(std::chrono::milliseconds(250));
	}
	return 0;
}