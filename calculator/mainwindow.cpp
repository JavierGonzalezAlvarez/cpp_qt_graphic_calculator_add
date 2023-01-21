#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <vector>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{        
    QString value1 = "1";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value1);
}

void MainWindow::on_pushButton_sum_clicked()
{
    QString add;
    QString valueAdd = " + ";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + valueAdd);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString value2 = "2";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value2);
}

void MainWindow::on_button_equal_clicked()
{
    QString old = ui->lineEdit->text();
    QStringList list = old.split(" ");
    int count = 0;

    quint8 size_str = list.size();
    ui->lineEdit_3->setText("total in list: " + QString::number(size_str));

    //last value of the string
    for (QStringList::Iterator S = list.begin(); S != list.end(); S++)
           {
                ui->lineEdit_5->setText(*S);
           }

    for (int k=0; k<list.size(); k++)
      {
         QRegExp re("\\d*");  // a digit (\\d) * more times, checking if a digit
         if (re.exactMatch(list[k])) {
                QString str = list[k];
                count = count + str.toInt();
                QString total = QString::number(count);
                ui->lineEdit_2->setText(total);
            }
      }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString value3 = "3";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value3);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString value4 = "4";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value4);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString value5 = "5";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value5);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString value6 = "6";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value6);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString value7 = "7";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value7);
}
void MainWindow::on_pushButton_8_clicked()
{
    //QString eight;
    QString value8 = "8";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value8);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString value9 = "9";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value9);
}

void MainWindow::on_pushButton_0_clicked()
{
    QString value0 = "0";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + value0);
}

void MainWindow::on_pushButton_substract_clicked()
{
    QString substract;
    QString valueSusbtract = " - ";
    QString old = ui->lineEdit->text();
    ui->lineEdit->setText(old + valueSusbtract);
}
