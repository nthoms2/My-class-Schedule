/* Nolan Thoms
c++ Fall Semester 2019
Lab 2
making my class schedule and getting to display
*/

#include <iostream>

using namespace std;

const string day1 = "Monday";
const string day2 = "Tuesday";
const string day3 = "Wednesday";
const string day4 = "Thursday";
const string day5 = "Friday";

const string time1 = "8:00";
const string time2 = "9:10";
const string time3 = "10:20";
const string time4 = "11:30";
const string time5 = "12:40";
const string time6 = "5:30";

const string class1 = "College Algebra & Trigonometry 127";
const string class2 = "C++ 162";
const string class3 = "Engineerng Problems 180";
const string class4 = "The College Expierience 108";
const string class5 = "Gen Chemistry 1 165";

int main()
{
	cout << day1 << "\t""\t" << time1 << "\t" << class1 << endl;
	cout << day1 << "\t""\t" << time2 << "\t" << class4 << endl;
	cout << day1 << "\t""\t" << time3 << "\t" << class5 << endl;
	cout << day1 << "\t""\t" << time5 << "\t" << class2 << endl;

	cout << day2 << "\t""\t" << time1 << "\t" << class1 << endl;
	cout << day2 << "\t""\t" << time4 << "\t" << class3 << endl;
	cout << day2 << "\t""\t" << time5 << "\t" << class2 << endl;

	cout << day3 << "\t" << time1 << "\t" << class1 << endl;
	cout << day3 << "\t" << time2 << "\t" << class4 << endl;
	cout << day3 << "\t" << time3 << "\t" << class5 << endl;
	cout << day3 << "\t" << time5 << "\t" << class2 << endl;
	cout << day3 << "\t" << time6 << "\t" << class5 << endl;

	cout << day4 << "\t" << time1 << "\t" << class1 << endl;
	cout << day4 << "\t" << time4 << "\t" << class3 << endl;
	cout << day4 << "\t" << time5 << "\t" << class2 << endl;

	cout << day5 << "\t""\t" << time1 << "\t" << class1 << endl;
	cout << day5 << "\t""\t" << time2 << "\t" << class4 << endl;
	cout << day5 << "\t""\t" << time3 << "\t" << class5 << endl;
	return 0;
}
