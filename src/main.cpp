#include <iostream>
#include <cmath>

// making a function for sqrt for extensibility later
// calling it sqrtFunc to avoid confusion with std::sqrt (which is what it currently uses)
float sqrtFunc(float foo) {
	float ret;
	ret = std::sqrt(foo);
	return (ret);
}

// main
int main() {
	float value;
	value = 42;

	float answer; 
	answer = sqrtFunc(value);
	std::cout << "The squareroot of 42 is " << answer << std::endl;
}
