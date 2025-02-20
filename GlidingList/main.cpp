#include "GlidingList.h"

#include <iostream>
#include <cstdarg>

#include <vector>

int main()
{
	/*
// push head only
	GlindingList<int> gl1;
	gl1.push_front(0);
	test(
		"gl1.push_front(0)",
		(*gl1.front() == 0),
		"sd",
		"gl1.front()",
		*gl1.front()
	);

	gl1.push_front(1);
	gl1.push_front(2);
	gl1.push_front(3);
	test(
		"gl1.push_front(1 & 2 & 3)",
		(*gl1.front() == 3),
		"sd",
		"gl1.front()",
		*gl1.front()
	);

// push head only
	GlindingList<int> gl2;
	gl2.push_back(0);
	test(
		"gl2.push_back(0)",
		(*gl2.back() == 0),
		"sd",
		"gl2.back()",
		*gl2.back()
	);
	gl2.push_back(-1);
	gl2.push_back(-2);
	gl2.push_back(-3);
	test(
		"gl2.push_back(-1 & -2 & -3)",
		(*gl2.back() == -3),
		"sd",
		"gl2.back()",
		*gl2.back()
	);

// push head and tail
	GlindingList<int> gl3;
	gl3.push_back(0);
	test(
		"gl3.push_back(0)",
		(*gl3.back() == 0),
		"sd",
		"gl3.back()",
		*gl3.back()
	);
	gl3.push_front(1);
	gl3.push_back(-1);

	gl3.push_front(2);
	gl3.push_back(-2);

	gl3.push_front(5);
	gl3.push_back(-5);

	test(
		"gl3.push -1 -2 -3 1 2 -5",
		(*gl3.back() == -5),
		"sd",
		"gl3.back()",
		*gl3.back()
	);

// Iterator
	// -5 -2 -1  0  1  2  5
	auto back = gl3.back();
	test(
		"gl3.back()",
		(*back == -5),
		"sd",
		"gl3.back()",
		*back
	);
	auto front = gl3.front();
	test(
		"gl3.front()",
		(*front == 5),
		"sd",
		"gl3.front()",
		*front
	);
	// increments
	++back;
	test(
		"++back",
		(*back == -2),
		"sd",
		"++back",
		*back
	);
	// decrements
	--front;
	test(
		"--front",
		(*front == 2),
		"sd",
		"--front",
		*front
	);

// iterate over from back
	std::cout << "need to be -5 -2 -1  0  1  2  5" << "\n";
	for (back = gl3.back(); back != gl3.front(); back++)
	{
		std::cout << *back << "\n";
	}

// iterate over from front
	std::cout << "need to be 5 2 1  0  -1  -2  -5" << "\n";
	for (back = gl3.front(); back != gl3.back(); back--)
	{
		std::cout << *back << "\n";
	}

	return 0;*/
}
