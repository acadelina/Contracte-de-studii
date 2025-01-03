#pragma once
class Observer
{
public:
	virtual void update() = 0;
};

/*
	Observable or Subject - class that modify changes in it's state
	Derive from this class if you want to provide notifications
*/
#include <vector>
#include <algorithm>
class Observable
{
private:
	/*Non owning pointers to observer instances*/
	std::vector<Observer*> observers;
public:

	//adaugare observer
	void addObserver(Observer* obs)
	{
		observers.push_back(obs);
	}

	//stergere observer
	void removeObserver(Observer* obs)
	{
		observers.erase(std::remove(observers.begin(), observers.end(), obs), observers.end());
	}

	//notificare
	void notify()
	{
		for (auto obs : observers)
			obs->update();
	}
};