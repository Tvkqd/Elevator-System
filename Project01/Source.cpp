/*
Handle multiply input at all time
Let n be number of floors
Store floor status in a map size n: -2-down, -1-up, 0-none

*/

#include"Header.h"

//Constructors
Elevator::Elevator() {
	floor_num = 2;
	pos = 1;
	outside_num = 0;
	inside_num = 0;
}

Elevator::Elevator(int floorNum) {
	floor_num = floorNum;
	pos = 1;
	outside_num = 0;
	inside_num = 0;
}

//Getters
//Setters

//Display elevator loading
void Elevator::elevator_loading_screen() {
	//FIXME
	system("CLS");
	cout << "                   " << pos + 1 << endl;
	cout << "====================||====================" << endl;
	for (int i = 0; i < 10; i++)
		cout << "||                  ||                  ||" << endl;
	cout << "====================||====================" << endl;
}

//Change elevator position
void Elevator::elevator_status() {
	//FIXME
	clock_t clk = clock();
	do {
		clk = clock() - clk;
	} while (clk / CLOCKS_PER_SEC < 3);
}

//Handle the request queue
void Elevator::handle_requests() {
	while (outside_num != 0 || inside_num != 0) {

	}

}
