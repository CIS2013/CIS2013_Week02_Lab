#include <iostream>
using namespace std;

int main(){
	int room_length = 5;
	int room_width = 10;
	// char my_letter = "a";
	// float room_radius = 10.0;
	// float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	
	cout << "Enter your length: ";
	cin >> room_length;
	
	cout << "Enter your width: ";
	cin >> room_width;
	
	// == != > < <= >=
	if(room_length == room_width){
		cout << "Length and Width are the same" << endl;
	} else {
		cout << "Length and Width are NOT the same" << endl;
		cout << "Length is: " << room_length << endl;
		cout << "Width is: " << room_width << endl;
	}
	
	if(room_length > room_width){
		cout << "Length is greater than width" << endl;
	} else {
		cout << "Width is greater than length" << endl;
	}
	
	return 0;
}