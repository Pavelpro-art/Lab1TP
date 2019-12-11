#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <exception>

using namespace std;

struct Artworks {   //список произведений
	string name;
	Artworks* nextArtworks;  
};

class Edition {
protected:
	string FIO;			//Вводить без пробелов с _
	Artworks* head;    //указатель на начало списка произв
	int countArtworks;

	void addArtworks(string name);
	void deleteArtworks(int index);

public:
	Edition() { cout << "Вызван конструктор Edition" << endl << endl; }
	virtual ~Edition() { cout << "Вызван деструктор Edition" << endl << endl; }

	//Чистые виртуальные функции, чтобы класс стал абстрактным
	virtual void setFIO(string) = 0;
	virtual string getFIO() = 0;
};
