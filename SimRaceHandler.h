#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimRaceHandler.h"

class SimRaceHandler : public QMainWindow
{
	Q_OBJECT

public:
	SimRaceHandler(QWidget *parent = Q_NULLPTR);

private:
	Ui::SimRaceHandlerClass ui;
};
