/*
 * Stack.cpp
 *
 *  Created on: Sep 30, 2019
 *      Author: shahafdan
 */

#include "Stack.hpp"
#include <iomanip>
#include <string>
#include <iostream>
#include <set>
using namespace std;

//constructor
Stack::Stack(int size)
{
	head = new node;
	length = size;
	head -> array = new string[length];
	count = 0;
}

void Stack::printAll()
{


	//we have the right number of nodes in the linkedlist
	node * temp = new node;
	temp = head;

	while(temp)
	{

		for(int i = 0; i < length; i++)
		{
			cout << temp -> array [i] << "\t";
		}
		cout << endl;
		temp = temp -> next;
	}
	cout << endl;
	return;

}

bool Stack::pop (/*string & data*/)
{
	node * temp = new node;
	temp = head;
	while(temp)
	{
		temp = temp -> next;
	} //make sure we are at the recent node;
	//if there are zero elements in the array, return false, else print the top element item and return true
	if(count == 0)
	{
		return false;
	}
	else
	{
		for(int i = 0; i < length - 1; i++)
		{
			temp -> array[i] = temp -> array[i+1]; //move up all the elements in the array
		}
		return true;
	}
}

void Stack::push(string topush)
{
	//make sure we are at the right node

	node * temp = new node;
	temp = head;
	while(temp -> next != nullptr)
	{
		temp = temp -> next;
	}
	if(count == 0) temp -> array[0] = topush;
	//if the stack is full
	else if (count == length)
	{
		// create a new node
		node * newNode = new node;
		newNode -> next = nullptr;
		newNode -> array = new string[length];
		count = 0;

		//connect the newNode as the next node in the list
		temp -> next = newNode;
		temp = temp -> next;
		temp -> array[0] = topush;
	}
	else //stack is not full:
	{
		for(int i = count - 1; i >= 0; i--)
		{
			temp -> array[i+1] = temp -> array [i];
		}
		temp -> array[0] = topush;
	}

	count ++; //increase followed index
	return;
}
/// this is the world of shahaf
// shahaf of world the is this


bool Stack::top (/*string & data*/)
{
	node * temp = new node;
	temp = head;
	while(temp)
	{
		temp = temp -> next;
	} //make sure we are at the recent node;

	//if there are zero elements in the array, return false, else print the top element item and return true
	if(count == 0)
	{
		return false;
	}
	else
	{
		cout << "the top element is: \t " <<  temp -> array [0] << endl;
		return true;
	}

}

void Stack::destroy()
{
 //do I need to delete all memory allocated to the arrays inside the nodes as well??
	node * temp = new node;
	while(head) //deleting every node will delete all memory allocated in that node
	{
		temp = head;
		head = head -> next;
		delete temp;
	}
	return;
}




