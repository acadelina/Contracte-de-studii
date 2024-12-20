#pragma once
#include"Observer.h"
#include"ContarctGUI.h"
#include"contract.h"
#include<QtWidgets>

class ContractCrudGUI :public QWidget, public Observer
{
public:
	ContractCrudGUI(Contract& co) : cont{ co } {
		initConnect();
		loadData();
		std::srand(static_cast<unsigned int>(std::time(nullptr)));
		startTimer(1000);
	}

	void paintEvent(QPaintEvent* ev) override {
		QPainter element{ this };
		for (int i = 0; i < numarFilme; i++) {
			int numarRandom = std::rand() % 6;
			int numarRandomX = std::rand() % (width() - 50);
			int numarRandomY = std::rand() % (height() - 50);
			int elementWidth = std::rand() % 50 + 10;
			int elementHeight = std::rand() % 50 + 10;
			QColor culoare = culoareRandom();
			element.setPen(culoare);
			element.setBrush(culoare);
			switch (numarRandom) {
			case 0:
				element.drawLine(numarRandomX, numarRandomY, elementWidth, elementHeight);
				break;
			case 1:
				element.drawRect(numarRandomX, numarRandomY, elementWidth, elementHeight);
				break;
			case 2:
				element.drawArc(numarRandomX, numarRandomY, elementWidth, elementHeight, 0, 5760);
				break;
			case 3:
				element.drawEllipse(numarRandomX, numarRandomY, elementWidth / 2, elementHeight / 2);
				break;
			case 4:
				element.drawPoint(numarRandomX, numarRandomY);
				break;
			case 5:
				element.drawPie(numarRandomX, numarRandomY, elementWidth, elementHeight, 0, 5760);
				break;
			}
		}
	}

	void update() override {
		loadData();
		repaint();
	}

private:
	Contract& cont;
	int numarFilme;

	void loadData() {
		numarFilme = (int)cont.getAllCont().size();
	}

	void initConnect() {
		cont.addObserver(this);
	}

	QColor culoareRandom() {
		int rosu = std::rand() % 256;
		int verde = std::rand() % 256;
		int albastru = std::rand() % 256;
		return QColor(rosu, verde, albastru);
	}

	~ContractCrudGUI() {
		cont.removeObserver(this);
	}

	
};