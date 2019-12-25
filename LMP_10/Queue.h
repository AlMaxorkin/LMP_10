#pragma once
#include <iostream>

struct Node
{
	int data;
	Node* next;
};


class Queue
{
	Node* Head, * Tail;
public:
	Queue() : Head(NULL), Tail(NULL) {};
	~Queue();
	Node* getHead() { return Head; };
	void del();
	void add(int);
	void show();
	bool range_check(int);
	int timer(int Time[][3]);
};

