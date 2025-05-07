#include <iostream>
using namespace std;

class Car {

private:
	string color;

public:

	Car() {
	
		color = "black";
	}

	string getColor() {
		return color;
	}

};

int main() {

	Car my_car;
	cout << my_car.getColor() << endl;

	return 0;

}