/*
 * Dic.hpp
 *
 *  Created on: Sep 16, 2019
 *      Author: shahafdan
 */

#ifndef DIC_HPP_
#define DIC_HPP_


#include <string>
#include <iostream>
#include <iomanip>
#include <set>

using namespace std;
class Dic //templatize in stage two
{
private:
	struct node
	{
		char let;
		node * nextLetter [26];
	};
	int wordCounter;
	node * head;

public:
	Dic();
	void insertWord(string word);
	int letterIndexFinder(char letter);
	bool check(string word);
	bool checkHelper(int size, string word, int i, node * node);
};



#endif /* DIC_HPP_ */
