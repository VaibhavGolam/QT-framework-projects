#include "mainwindow.h"
#include "ui_mainwindow.h"

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

int firstNum,secondNum,result;

void MainWindow::setWindowTitle(const QString &title)
{
    QMainWindow::setWindowTitle(title);
}

void MainWindow::on_btnAdd_clicked()
{
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecNum->text().toInt();
    result = firstNum + secondNum;
    ui->txtRes->setText(QString::number(result));
}

void MainWindow::on_btnSub_clicked()
{
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecNum->text().toInt();
    result = firstNum - secondNum;
    ui->txtRes->setText(QString::number(result));
}


void MainWindow::on_btnDiv_clicked()
{
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecNum->text().toInt();
    result = firstNum / secondNum;
    ui->txtRes->setText(QString::number(result));
}


void MainWindow::on_btnMul_clicked()
{
    firstNum = ui->txtFirstNum->text().toInt();
    secondNum = ui->txtSecNum->text().toInt();
    result = firstNum * secondNum;
    ui->txtRes->setText(QString::number(result));
}

