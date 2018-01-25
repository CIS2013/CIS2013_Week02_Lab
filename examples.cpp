#include <iostream>
using namespace std;

int main(){
	int room_length = 5;
	int room_width = 10;
	// char my_letter = "a";
	// float room_radius = 10.0;
	// float room_circle_area = (room_radius * room_radius) * 3.14;
	bool keep_running = true;
	char question = 'y';
	
	while(keep_running){
	
		cout << "Enter your length: ";
		cin >> room_length;
		
		cout << "Enter your width: ";
		cin >> room_width;
		
		/* 
			== equal
		  != not equal
			>  greater than 
			<  less than
			<=  less than or equal
			>= greater than or equal
			|| left or right is true 
			&& BOTH left and right is true 
		*/
		
		if(room_length > room_width){
			cout << "Length is greater than width" << endl;
		} else {
			cout << "Width is greater than length" << endl;
		}
		
		cout << "Run again (Y/n): ";
		cin >> question;
		
		if(question != 'y'){ keep_running = false; }
	}
	
	return 0;
}