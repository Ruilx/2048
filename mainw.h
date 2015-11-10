#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#if QT_VERSION > 0x050000
#include <QtWidgets>
#else
#include <QtGui>
#endif
#include "view.h"
#include "grid.h"

class MainW : public QMainWindow
{
	Q_OBJECT
public:
	explicit MainW(QWidget *parent = 0);

signals:

public slots:

private slots:
	void scoreUpdate(int score);

private:
	QGraphicsScene *scene;
	Grid *grid;
	View *view;
	QLabel *lScore;
	QPushButton *pbRestart, *pbQuit;
};

#endif // MAINW_H
