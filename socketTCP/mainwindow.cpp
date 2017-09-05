#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpSocket>
//#include <QTcpServer>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_ip->setAlignment(Qt::AlignHCenter);
    ui->lineEdit_ip->setText("192.168.1.38");
    ui->lineEdit_port->setText("5000");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_exit_clicked()
{
    tcpSocket.abort();
    tcpSocket.close();
    this->close();
}


void MainWindow::on_pushButton_connect_to_telnet_clicked()
{
QHostAddress address;
QString ip;

    ip=ui->lineEdit_ip->text();
quint32 ipAddress = QHostAddress(ip).toIPv4Address();
quint16 port;
QString strPort;

strPort=this->ui->lineEdit_port->text();
port=strPort.toUInt();
qDebug()<<"port:"<<port;
qDebug()<<"ip"<<ip;
address.setAddress(ipAddress);

tcpSocket.connectToHost(address , port,QIODevice::ReadWrite);

QString string = "I'm client !";
QByteArray array;
array.append(string);
qDebug()<<tcpSocket.write(array);
}
