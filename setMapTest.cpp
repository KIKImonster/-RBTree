#include<set>
#include<iostream>
#include<string>
#include<map>
using namespace std;

//template<class T1, class T2>
//struct pair
//{
//	typedef T1 first_type;
//	typedef T2 second_type;
//
//	T1 first;
//	T2 second;
//	pair()
//		:first(T1())
//		, second(T2())
//	{}
//	pair(const T1& a, const T2& b)
//		:first(a)
//		, second(b)
//	{}
//};

//void TestSet()
//{
//	int array[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10, 1, 6, 2, 9, 3, 0, 2, 4, 8, 0 };
//	set<int> s(array, array + sizeof(array) / sizeof(array[0]));
//	cout << s.size() << endl;
//
//	for (auto&e : s)
//	{
//		cout << e << " ";
//		cout << endl;
//	}
//	for (auto it = s.begin(); it != s.end(); ++it)
//	{
//		cout << *it << " ";
//		cout << endl;
//	}
//
//	cout << "出现了：" << s.count(3) << endl;
//}
//
void TestMap()
{
	map<string, string> m;
	m.insert(pair<string, string>("peach", "桃子"));
	m.insert(pair<string, string>("banna", "香蕉"));
	m["apple"] = "苹果";
	cout << m.size() << endl;
	cout << endl;
	for (auto& e : m)
	{
		cout << e.first << "--->" << e.second << endl;
		cout << endl;
	}
	auto ret = m.insert(make_pair("peach", "桃色"));
	if (ret.second)
		cout << "<peach, 桃色>不再map中，已经插入" << endl;
	else
		cout << "键值为peach的元素已经存在：" << ret.first->first << "--->" << ret.first->second << "插入失败" << endl;
	m.erase("apple");
	for (auto& e : m)
	{
		cout << e.first << "--->" << e.second << endl;
		cout << endl;
	}
	if (1 == m.count("apple"))
		cout << "apple 还在" << endl;
	else
		cout << "apple吃完了" << endl;
}
