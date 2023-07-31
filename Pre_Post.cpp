#include <iostream>

using namespace std;

int main() {
	int number; //inputted number
	int pre_input_increment, post_input_increment, pre_increment, post_increment; //for increment
	int pre_input_decrement, post_input_decrement, pre_decrement, post_decrement; //for decrement 
	cout<<"Pre-Increment and Post-Increment || Pre-Decrement and Post-Decrement\n\n";
	cout<<"Enter a Number: --> ";
	cin>> number;
	
	//pre and post increment execution
	pre_input_increment = number;
	post_input_increment = pre_input_increment;
	pre_increment = ++pre_input_increment;
	post_increment = post_input_increment++;
	
	//pre and post decrement execution
	pre_input_decrement = number;
	post_input_decrement = pre_input_decrement;
	pre_decrement = --pre_input_decrement;
	post_decrement = post_input_decrement--;
	
	cout<<"\nPre Increment value of number before execution:   " <<pre_increment <<"\n";
	cout<<"Pre Increment value of number after execution:    " <<pre_input_increment<<"\n\n";	
	cout<<"Post Increment value of number before execution:  " <<post_increment <<"\n";
	cout<<"Post Increment value of number after execution:   " <<post_input_increment <<"\n\n";
	cout<<"Pre Decrement value of number before execution:   "  <<pre_decrement <<"\n";
	cout<<"Pre Decrement value of number after execution:    " <<pre_input_decrement<<"\n\n";	
	cout<<"Post Decrement value of number before execution:  " <<post_decrement <<"\n";
	cout<<"Post Decrement value of number after execution:   " <<post_input_decrement;
	
	cout<<"\n\n\nSubmitted By: Jeff Jojer Jones E. Catulay\nBSCS 2B\n\n";
	
	system("pause");
}
