#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "MyList.h"
#include <QDebug>

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


void MainWindow::on_pushButton_clicked()
{
    //append
    list.append(ui->spinBox->value());
}

void MainWindow::on_pushButton_2_clicked()
{
    //remove
    list.remove(ui->spinBox_2->value());
}

void MainWindow::on_pushButton_3_clicked()
{
    //at
    qDebug()<<list.at(ui->spinBox_3->value());
}

void MainWindow::on_pushButton_4_clicked()
{
    //print
    list.print();
}


