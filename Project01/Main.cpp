#include"Header.h"
#include<cstdlib>

//Return the request from outside people
OutsideRequest outside_random_requests(int n) {
	srand(time(0));
	OutsideRequest request;
	request.floor = rand() % n + 1;
	// -2: down, -1: up
	request.upOrdown = rand() % 3 - 2;
	return request;
}

int main() {
	OutsideRequest machine_requests;
	int floorNum;

	//Get number of floor
	cout << "Enter number of floors: ";
	cin >> floorNum;
	Elevator myElevator(floorNum);
	//Start the random generator of requests
	machine_requests = outside_random_requests(floorNum);
	myElevator.set_outside_requests(machine_requests);


	//Display the elevator status
	//Get user destonation as the elevator arrives
	//Display the elevator status


	system("pause");
	return 0;
}