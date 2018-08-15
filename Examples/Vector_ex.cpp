#include <vector>
#include <iostream>

using namespace std;

void vector_ex()
{
	vector<int> test1 = { 1, 2, 3, 4, 5 };

	for (int i : test1)
		cout << i << endl;
}