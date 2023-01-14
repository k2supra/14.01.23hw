#include <iostream>

using namespace std;

int main() {
	//*****************PATH*****************//
	size_t path_AB;
	size_t path_BC;
	cout << "Enter path from A to B (km): ", cin >> path_AB;
	cout << "Enter path from B to C (km): ", cin >> path_BC;
	//*****************PATH*****************//
	

	
	//*****************FUEL*****************//
	size_t fuel_full, fuel_l500, fuel_l1000, fuel_l1500, fuel_l2000, fuel_left;
	int fuel_in_tank;
	fuel_full = 300;
	fuel_l500 = 1;
	fuel_l1000 = 4;
	fuel_l1500 = 7;
	fuel_l2000 = 9;
	//*****************FUEL*****************//

	int on_plane{};

	
	//*****************IF*****************//
	cout << "Enter your added weight(kg): ";
	size_t weight;
	cin >> weight;
	if (weight >= 0 && weight < 500)
	{
		on_plane = 1;
	}

	else if (weight >= 500 && weight < 1000)
	{
		on_plane = 4;
	}

	else if (weight >= 1000 && weight < 1500)
	{
		on_plane = 7;
	}

	else if (weight >= 1500 && weight < 2000)
	{
		on_plane = 9;
	}
	//*****************IF*****************//


	//*****************CASE*****************//
	switch (on_plane)
	{
	case 1:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l500);
		if (fuel_in_tank < 0)
		{
			cout << "You are running out of fuel." << " There was not enough fuel" << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			cout << fuel_in_tank << " (l) will left after travel from A to B";
		}
	}break;

	case 4:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l1000);
		if (fuel_in_tank < 0)
		{
			cout << "You are running out of fuel." << " There was not enough fuel" << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			cout << fuel_in_tank << " (l) will left after travel from A to B";
		}
	}break;

	case 7:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l1500);
		if (fuel_in_tank < 0)
		{
			cout << "You are running out of fuel." << " There was not enough fuel" << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			cout << fuel_in_tank << " (l) will left after travel from A to B";
		}
	}break;

	case 9:
	{
		fuel_in_tank = 300 - (path_AB * fuel_l2000);
		if (fuel_in_tank < 0)
		{
			cout << "You are running out of fuel." << " There was not enough fuel" << fuel_in_tank;
		}
		else if (fuel_in_tank >= 0 || fuel_in_tank > 0)
		{
			cout << fuel_in_tank << " (l) will left after travel from A to B";
		}
	}break;
	default:
		break;
	}
	//*****************CASE*****************//
	
}