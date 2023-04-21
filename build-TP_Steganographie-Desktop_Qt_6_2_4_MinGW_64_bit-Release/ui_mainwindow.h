/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionThere_is_nothing_here;
    QAction *actionNothing_here_too;
    QAction *actionWhy_you_click_here;
    QAction *actionJust_click_on_the_button_be;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuYEAHMABOI;
    QMenu *menuHEHE;
    QMenu *menuWOW;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(382, 248);
        actionThere_is_nothing_here = new QAction(MainWindow);
        actionThere_is_nothing_here->setObjectName(QString::fromUtf8("actionThere_is_nothing_here"));
        actionNothing_here_too = new QAction(MainWindow);
        actionNothing_here_too->setObjectName(QString::fromUtf8("actionNothing_here_too"));
        actionWhy_you_click_here = new QAction(MainWindow);
        actionWhy_you_click_here->setObjectName(QString::fromUtf8("actionWhy_you_click_here"));
        actionJust_click_on_the_button_be = new QAction(MainWindow);
        actionJust_click_on_the_button_be->setObjectName(QString::fromUtf8("actionJust_click_on_the_button_be"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 20, 161, 24));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 50, 263, 129));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 382, 21));
        menuYEAHMABOI = new QMenu(menubar);
        menuYEAHMABOI->setObjectName(QString::fromUtf8("menuYEAHMABOI"));
        menuHEHE = new QMenu(menubar);
        menuHEHE->setObjectName(QString::fromUtf8("menuHEHE"));
        menuWOW = new QMenu(menubar);
        menuWOW->setObjectName(QString::fromUtf8("menuWOW"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuYEAHMABOI->menuAction());
        menubar->addAction(menuHEHE->menuAction());
        menubar->addAction(menuWOW->menuAction());
        menuYEAHMABOI->addAction(actionThere_is_nothing_here);
        menuHEHE->addAction(actionNothing_here_too);
        menuWOW->addSeparator();
        menuWOW->addAction(actionWhy_you_click_here);
        menuWOW->addAction(actionJust_click_on_the_button_be);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionThere_is_nothing_here->setText(QCoreApplication::translate("MainWindow", "There is nothing here", nullptr));
        actionNothing_here_too->setText(QCoreApplication::translate("MainWindow", "Nothing here too", nullptr));
        actionWhy_you_click_here->setText(QCoreApplication::translate("MainWindow", "Why you click here ??", nullptr));
        actionJust_click_on_the_button_be->setText(QCoreApplication::translate("MainWindow", "Just click on the button below", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Choose a text file", nullptr));
        menuYEAHMABOI->setTitle(QCoreApplication::translate("MainWindow", "YEAHMABOI", nullptr));
        menuHEHE->setTitle(QCoreApplication::translate("MainWindow", "HEHE", nullptr));
        menuWOW->setTitle(QCoreApplication::translate("MainWindow", "WOW", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
