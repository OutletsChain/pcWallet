#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>

class MyComboBox : public QComboBox
{
	Q_OBJECT
public:
    MyComboBox(QWidget* parent = 0);
    ~MyComboBox();

	virtual void showPopup();
signals:
	void onShowUp( );
public slots:
	void doShowUp();
};

#endif // MYCOMBOBOX_H
