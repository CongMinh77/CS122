#include <iostream>
using namespace std;
int main()
{
	cout << "__LINE__ = " << __LINE__ << endl
		<< "__FILE__ = " << __FILE__ << endl
		<< "__DATE__ = " << __DATE__ << endl
		<< "__TIME__ = " << __TIME__ << endl
		<< "__cplusplus = " << __cplusplus << endl;
}