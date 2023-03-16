#include "mymainwindow.h"
#include "ui_mymainwindow.h"

MyMainWindow::MyMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyMainWindow)
{
    ui->setupUi(this);
}

MyMainWindow::~MyMainWindow()
{
    delete ui;
}

void MyMainWindow::display_res()
{
    ui->m_PB_Number->display(m_display);
    ui->m_PB_Numbe_2->display(m_number_1);
    switch(flag)
    {
    case(Plus):
        ui->m_PB_Sign->setText("+");
        break;
    case(Minus):
        ui->m_PB_Sign->setText("-");
        break;
    case(Mult):
        ui->m_PB_Sign->setText("*");
        break;
    case(Div):
        ui->m_PB_Sign->setText("/");
        break;
    default:
        break;
    }
}

void MyMainWindow::on_m_PB_BackSpace_clicked()
{
    m_display.chop(1);
    if(m_display.isEmpty())
        m_display += '0';
    display_res();
}

void MyMainWindow::on_m_PB_Clear_clicked()
{
    m_display.clear();
    m_display += '0';
    display_res();
}

void MyMainWindow::on_m_PB_Plus_clicked()
{
    if(m_number_1.isEmpty())
    {
        m_number_1 = m_display;
        m_display.clear();
        m_display += '0';
        flag = Plus;
    }
    display_res();
}

void Count()
{

}

void MyMainWindow::on_m_PB_0_clicked()
{
    if(m_display.size() > 1 || m_display.front() != '0')
        m_display += '0';
    display_res();
}

void MyMainWindow::on_m_PB_1_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '1';
    display_res();
}

void MyMainWindow::on_m_PB_2_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '2';
    display_res();
}

void MyMainWindow::on_m_PB_3_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '3';
    display_res();
}

void MyMainWindow::on_m_PB_4_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '4';
    display_res();
}

void MyMainWindow::on_m_PB_5_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '5';
    display_res();
}

void MyMainWindow::on_m_PB_6_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '6';
    display_res();
}

void MyMainWindow::on_m_PB_7_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '7';
    display_res();
}

void MyMainWindow::on_m_PB_8_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '8';
    display_res();
}

void MyMainWindow::on_m_PB_9_clicked()
{
    if(m_display.size() == 1 && m_display.front() == '0')
        m_display.chop(1);
    m_display += '9';
    display_res();
}
