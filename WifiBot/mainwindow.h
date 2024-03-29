#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "myrobot.h"
#include "robotcontroller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Connection_clicked();

    void on_label_2_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    MyRobot robot;
    robotController robotController;
};
#endif // MAINWINDOW_H
