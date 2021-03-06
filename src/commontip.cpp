#include "commontip.h"
#include "ui_commontip.h"
#include "debug_log.h"

CommonTip::CommonTip( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CommonTip)
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
	setFontPixelSize();
    DLOG_QT_WALLET_FUNCTION_END;
}

CommonTip::~CommonTip()
{
    DLOG_QT_WALLET_FUNCTION_BEGIN;
    delete ui;
    DLOG_QT_WALLET_FUNCTION_END;
}

void CommonTip::setFontPixelSize()
{
	QFont font = ui->label->font();
	font.setPixelSize(12);
	ui->label->setFont(font);
}

void CommonTip::setText(QString text)
{
    ui->label->setText( text);
    ui->label->adjustSize();
    ui->label->move(0,0);
    setFixedSize( ui->label->size());
}
