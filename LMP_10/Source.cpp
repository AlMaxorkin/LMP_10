#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Queue conv1;
	
	const int N = 4;

	int Time[N][3] = {
	{ 1, 2, 3 },
	{ 3, 2, 1 },
	{ 4, 3, 5 },
	{ 6, 5, 9 }
	};

	conv1.add(1);
	conv1.add(2);
	conv1.add(1);
	conv1.add(3);


	if (conv1.range_check(N))
	{
		cout << "Время изготовления: " << conv1.timer(Time) << endl;
	}
	else
		cout << "ERROR";

	return 0;
}