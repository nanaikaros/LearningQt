#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_qtimer = new QTimer();

    QImage img;
    img.load("");
    ui->label->setPixmap(QPixmap::fromImage(img));

    connect(m_qtimer, &QTimer::timeout, this, &Widget::timeoutSlot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    m_qtimer->start(1000);
}

void Widget::timeoutSlot()
{

}
