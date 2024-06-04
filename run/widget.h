#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <Qprocess>
#include <QMessageBox>

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
    ~Widget();

private slots:
    void on_commitButton_clicked();
    void on_cancleButton_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
