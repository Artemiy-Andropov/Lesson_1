#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MyMainWindow; }
QT_END_NAMESPACE

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private slots:
    void on_m_PB_BackSpace_clicked();
    void on_m_PB_Clear_clicked();

    void on_m_PB_Plus_clicked();

    void on_m_PB_0_clicked();
    void on_m_PB_1_clicked();
    void on_m_PB_2_clicked();
    void on_m_PB_3_clicked();
    void on_m_PB_4_clicked();
    void on_m_PB_5_clicked();
    void on_m_PB_6_clicked();
    void on_m_PB_7_clicked();
    void on_m_PB_8_clicked();
    void on_m_PB_9_clicked();

private:
    Ui::MyMainWindow *ui;
    QString m_display;
    QString m_number_1;
    void display_res();
    enum Sign {Plus, Minus, Mult, Div};
    int flag;
};
#endif // MYMAINWINDOW_H
