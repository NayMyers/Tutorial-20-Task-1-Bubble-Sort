#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<vector>


using namespace std;

class BubbleSort
{
private:
	vector<int> values;
public:
	void addValue(int value);
	void displayValues(void);
	void sortValues(void);
};

void BubbleSort::addValue(int value)
{
	values.push_back(value);
}

void BubbleSort::displayValues(void)
{
	for (int x = 0; x < int(values.size()); x++)
	{
		cout << x << " =: " << values[x] << endl;
	}
}

void BubbleSort::sortValues(void)
{
	bool swap;
	int placeHolder = 0;
	do
	{
		swap = false;
		for (int x = 0; x < int(values.size() - 1); x++)
		{
			if (values[x] > values[x + 1])
			{
				placeHolder = values[x];
				values[x] = values[x + 1];
				values[x + 1] = placeHolder;
				swap = true;
			}
		}
	} while (swap);

}
int main(void)
{
	int amountToSort = 0;
	cout << "How many numbers do you want to enter into the vector? --> ";
	cin >> amountToSort;
	cout << endl;
	BubbleSort Sort1;
	for (int x = 0; x < amountToSort; x++)
	{
		int value = 0;
		cout << "Enter number to add: ";
		cin >> value;
		cout << endl;
		Sort1.addValue(value);
	}

	Sort1.displayValues();
	cout << "DISPLAYED VALUES FIRST TIME" << endl;
	Sort1.sortValues();
	cout << endl;
	cout << "SORTED VALUES" << endl;
	cout << endl;
	Sort1.displayValues();
	cout << "DISPLAYED VALUES SECOND TIME" << endl;

	return 0;
}