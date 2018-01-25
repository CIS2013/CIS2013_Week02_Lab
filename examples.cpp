#include <iostream>
using namespace std;

int main(){
	int room_length = 5;
	int room_width = 10;
	float room_radius = 10.0;
	float room_circle_area = (room_radius * room_radius) * 3.14;
	
	// Printing stuff out
	cout << "Our first number is " << room_length << 
		endl << "Our second number is " << room_width << endl;
	// Different math operators + - / * %
	cout << "If you multiply them you get " << 
		room_width * room_length << endl;
	cout << "Unless your rooms a circle " << 
		 room_circle_area << endl;
	
	/* Camel Case
	roomLength
	  Snake Case
	room_length */
	
	return 0;
}