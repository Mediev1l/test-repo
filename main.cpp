#include "SimRaceHandler.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SimRaceHandler w;
	w.show();
	return a.exec();
}
