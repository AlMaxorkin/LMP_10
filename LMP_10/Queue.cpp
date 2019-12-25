#include "Queue.h"
using namespace std;

Queue::~Queue()
{
	Node* temp = Head;

	while (temp != Head)
	{
		temp = Head->next;
		delete Head;

		Head = temp;
	}
}

void Queue::del()
{
	if (Head != NULL)
	{
		Node* temp = Head;
		Head = Head->next;
		delete temp;
	}
}

void Queue::add(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;

	if (Head != NULL)
	{
		Tail->next = temp;
		Tail = temp;
	}
	else Head = Tail = temp;
}

void Queue::show()
{
	Node* temp = Head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

bool Queue::range_check(int N)
{
	Node* temp = Head;
	while (temp != NULL)
	{
		if (temp->data > N || temp->data < 1)
			return false;
		temp = temp->next;
	}
	cout << endl;
	return true;
}

int Queue::timer(int Time[][3])
{
	Queue conv2, conv3;
	int main_time = 0;
	int timer1 = 0, timer2 = 0, timer3 = 0;

	while (Head || conv2.Head || conv3.Head)
	{
		if (Head)
		{
			
			if (Time[Head->data-1][0] == timer1)
			{
				timer1 = 0;
				conv2.add(Head->data);
				del();

			}
			timer1++;
		}
		if (conv2.Head)
		{
			
			if (Time[conv2.Head->data-1][1] == timer2)
			{
				timer2 = 0;
				conv3.add(conv2.Head->data);
				conv2.del();
			}
			timer2++;
		}
		if (conv3.Head)
		{
			
			if (Time[conv3.Head->data-1][2] == timer3)
			{
				timer3 = 0;
				conv3.del();
			}
			timer3++;
		}
		main_time++;

	}

	return main_time;
}