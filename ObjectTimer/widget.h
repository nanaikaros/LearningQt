#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    virtual void timerEvent(QTimerEvent* event) override;

    ~Widget();

private slots:
    void on_startButton_clicked();



    void on_stopButton_clicked();

private:
    Ui::Widget *ui;
    int m_Timer_id;
    int m_Pic_id;
};
#endif // WIDGET_H
