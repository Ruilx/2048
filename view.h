#ifndef VIEW_H
#define VIEW_H

#if QT_VERSION > 0x050000
#include <QtWidgets>
#else
#include <QtGui>
#endif
#include <QGraphicsView>

class View : public QGraphicsView
{
public:
	explicit View(QGraphicsScene *scene, QWidget *parent = 0) : QGraphicsView(scene, parent) {}

protected:
	void resizeEvent(QResizeEvent *event)
	{
		QGraphicsView::resizeEvent(event);
		fitInView(sceneRect(), Qt::KeepAspectRatio);
	}
};

#endif // VIEW_H
