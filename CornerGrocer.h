/* Amra Ibrahimovic
   Professor Chan
   February 19, 2023
   Project 3 Corner Grocer */

#pragma once
#include <iostream>
using namespace std;

//Declaring class
class printList;

//Vector & class for grocery list
vector<printList> printVector;
class printList
{
public:
	string word;
	int times;

	//Function to print full list
	printList(string _word, int _times) {
		word = _word;
		times = _times;
		printVector.push_back(*this);
	}
};
