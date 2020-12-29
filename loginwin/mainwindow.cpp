#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QTimer>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer_ls = new QTimer(this);
    QObject::connect(timer_ls,
                     SIGNAL(timeout()),
                     this,
                     SLOT(updateTime()));
    timer_ls->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    ui->lblcurrentDateTime->setText(QDateTime::currentDateTime().toString("dddd, dd-MM-yyyy HH:mm:ss"));
}

void MainWindow::on_btnLogin_clicked()
{
    QString uname = ui->txtUname->text();
    QString pass = ui->txtPass->text();
    if (uname == "hieu" && pass == "123"){
        QMessageBox msgBox;
        msgBox.setText("Login successful!");
        msgBox.exec();
    }
}
