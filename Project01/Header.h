#pragma once
#include<iostream>
#include<queue>
#include<ctime>
using namespace std;

struct OutsideRequest {
	int floor;
	int upOrdown;
};

class Elevator {
	int floor_num;
	int pos;
	OutsideRequest outside_requests;
	queue<int>inside_requests;
	int outside_num;
	int inside_num;
public:
	//Constructors
	Elevator();
	Elevator(int floorNum);

	//Setters
	void set_outside_requests(OutsideRequest rq) { outside_requests = rq; outside_num++; }

	//Getters
	OutsideRequest get_outside_requests() { return outside_requests; }

	//Return position of the elevator
	int elevator_position() {return pos;}
	//Display elevator loading
	void elevator_loading_screen();
	//Change elevator position
	void elevator_status();

	//Handle the request queue
	void handle_requests();
};

