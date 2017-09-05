#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include <QTimer>
#include <QLabel>
#include <QStatusBar>
#include <QDebug>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash=new QSplashScreen;
    #ifdef Q_OS_LINUX
    qDebug()<<"LINUX OS";
    splash->setPixmap(QPixmap(qApp->applicationDirPath() + "/../../../../socketTCP/png/icon_convert.png"));
    #endif

    //#ifdef Q_OS_MAC
    //qDebug()<<"MAC OS";
    splash->setPixmap(QPixmap(qApp->applicationDirPath() + "/../../../../socketTCP/png/icon_convert.png"));
   // #endif

    qDebug()<<"link: "<<qApp->applicationDirPath();

    splash->setWindowOpacity(1);
    splash->show();
    QTimer::singleShot(2000,splash,SLOT(close()));

    MainWindow w;

    QIcon icon(qApp->applicationDirPath() + "/../../../../socketTCP/png/icon_convert.png");

    w.setWindowIcon(icon);
    w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
    QTimer::singleShot(1000,&w,SLOT(show()));

    return a.exec();
}
