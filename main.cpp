#include <iostream>
#include <chrono>
#include <thread>
#include <cstdlib>

int main()
{
	const int max = 30;

	const int* pointer_to_max = &max;

	while (true)
	{
		system("cls");

		std::cout << "Address: " << pointer_to_max << std::endl;
		std::cout << "Address Value: " << *pointer_to_max << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));

		if (*pointer_to_max != max)
			break;
	}

	std::cout << "Something attempted to change / did change the value of max -> " << *pointer_to_max << std::endl;

	std::cin.get();

	return 0;
}
