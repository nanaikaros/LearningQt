#include "widget.h"
#include "ui_widget.h"

#define TIMEOUT 1 * 1000

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_Pic_id = 2;
    QPixmap pix("C:\\Users\\wang\\Pictures\\argue1.png");
    ui->label->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_startButton_clicked()
{
    //返回定时器编号
    m_Timer_id = this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent* event)
{
    if(event->timerId() != m_Timer_id)
        return;

    QString path("");
    path += QString::number(m_Pic_id);
    path += ".jpg";

    QPixmap pix(path);
    ui->label->setPixmap(pix);

    m_Pic_id++;
    if(5 == m_Pic_id)
        m_Pic_id = 1;

}

void Widget::on_stopButton_clicked()
{
    this->killTimer(m_Timer_id);
}

