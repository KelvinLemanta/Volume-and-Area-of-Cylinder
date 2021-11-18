
// 137533 Kelvin Lemanta

#include <iostream>
using namespace std;

//Volume of cylinder
int main()
{
	int rad, hegt;
	float volcyld;
	cout << "calculate volume of cylinder";
	cout << "input rad of cylinder";
	cin >> rad;
	cout << "input height of cylinder";
	cin >> hegt;
	volcyld= (3.14*rad*rad*hegt);
	cout << "volume of cylinder is : "<<volcyld<<endl;
	cout << endl;
	return 0;
}

//Area of the cylinder

int main()
{
	int rad, heght;
	float areacyld;
	cout << "calculate area of cylinder";
	cout << "input rad of cylinder";
	cin >> rad;
	cout << "input height of cylinder";
	cin >> hegt;
	volcyld= ( 2*3.14*hegt + 2*3.14*rad*hegt);
	cout << "area of cylinder is : "<<areacyld<<endl;
	cout << endl;
	return 0;
}
	

