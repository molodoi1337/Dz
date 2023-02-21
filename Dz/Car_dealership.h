#pragma once
#include<vector>
#include <iostream>
#include<string>

using namespace std;

struct Struct
{
	vector<string> name;
	vector<unsigned> age;
	vector<unsigned> volumeEngine;
	vector<unsigned> price;
	
}struc;

class Car_dealerShip {

public:

	void Add() {
		string Name;
		unsigned Age, Volume, Price;
		cout << "enter a name"<<endl; cin >> Name;
		cout << "enter the year of production" << endl; cin >> Age;
		cout << "enter the engine volume" << endl; cin >> Volume;
		cout << "enter the price" << endl; cin >> Price;

		struc.name.push_back(Name);
		struc.age.push_back(Age);
		struc.volumeEngine.push_back(Volume);
		struc.price.push_back(Price);
		system("cls");
	}

	void Show() {
		system("cls");
		for (int i = 0; i < struc.age.size(); i++) {
			cout << "name: " << struc.name.at(i)<<endl;
			cout << "year of production: " << struc.age.at(i) << endl;
			cout << "engine volume: " << struc.volumeEngine.at(i) << endl;
			cout << "price: " << struc.price.at(i) << endl;
			cout << endl;
		}
		cout << endl;
	}

	void Delete() {
		int id;
		cout << "information about which machine you want to delete? " << endl; cin >> id;
		struc.age.erase(struc.age.begin() + id);
		struc.name.erase(struc.name.begin() + id);
		struc.volumeEngine.erase(struc.volumeEngine.begin() + id);
		struc.price.erase(struc.price.begin() + id);
	}

	void Search() {
		system("cls");
		string n; cout << "enter information about which car you want to delete"<<endl;
		int id = distance(struc.name.begin(), find(struc.name.begin(), struc.name.end(), n));
		cout << "Name: " << struc.name.at(id)<<endl;
		cout << "Age: " << struc.age.at(id) << endl;
		cout << "Volume: " << struc.volumeEngine.at(id) << endl;
		cout << "Price: " << struc.price.at(id) << endl;
	}

};
