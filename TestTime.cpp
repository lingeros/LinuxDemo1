#include "TestTime.h"

void TestTime::getTime()
{
	time_t t;
	t = time(NULL);
	cout << "毫秒数是 :" << t << endl;
	string str = ctime(&t);
	cout << "时间是：" << str << endl;
	
}
