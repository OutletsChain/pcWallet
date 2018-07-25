#include "mycombobox.h"

MyComboBox::MyComboBox(QWidget* parent):
QComboBox(parent)
{
    
}

MyComboBox::~MyComboBox()
{

}


void MyComboBox::showPopup()
{
	emit onShowUp( );
}

void MyComboBox::doShowUp()
{
	QComboBox::showPopup();
}