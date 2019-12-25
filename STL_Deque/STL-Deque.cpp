//deque is dynamic array
//deque and vector are similar
//deque can insert and delete data from the begin and end of array
//vector only insert and delete data from the end of array
//deque has an iterator, the iterator is pointer

#include <iostream>
#include <deque>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	deque<int> a;

	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	a.push_front(2);
	a.push_front(1);
	a.push_front(0);

	/*
	for (int i = 0; i <= 5; i++)
	{
		cout << a[i] << "\t";

	}
	*/

	/*
	for (size_t nCount = 0; nCount < a.size(); ++nCount)
	{
		cout <<"a["<< nCount <<"] "<< a[nCount] << endl;
	}
	*/

	deque<int>::iterator iElementLocator;
	for (iElementLocator = a.begin(); iElementLocator != a.end(); ++iElementLocator)
	{
		cout << *iElementLocator << endl;
	}

	cout << endl << endl;

	a.pop_back();
	a.pop_front();


	for (iElementLocator = a.begin(); iElementLocator != a.end(); ++iElementLocator)
	{
		size_t nOffset = std::distance(a.begin(), iElementLocator);
		cout << "a["<<nOffset<<"]="<<*iElementLocator << endl;
	}
	/*
	for (size_t nCount = 0; nCount < a.size(); ++nCount)
	{
		cout << "a[" << nCount << "] " << a[nCount] << endl;
	}
	*/
	return 0;
}