/********************************************************************************
** Form generated from reading UI file 'lab100.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB100_H
#define UI_LAB100_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lab100Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *lab100Class)
    {
        if (lab100Class->objectName().isEmpty())
            lab100Class->setObjectName("lab100Class");
        lab100Class->resize(600, 400);
        menuBar = new QMenuBar(lab100Class);
        menuBar->setObjectName("menuBar");
        lab100Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(lab100Class);
        mainToolBar->setObjectName("mainToolBar");
        lab100Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(lab100Class);
        centralWidget->setObjectName("centralWidget");
        lab100Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(lab100Class);
        statusBar->setObjectName("statusBar");
        lab100Class->setStatusBar(statusBar);

        retranslateUi(lab100Class);

        QMetaObject::connectSlotsByName(lab100Class);
    } // setupUi

    void retranslateUi(QMainWindow *lab100Class)
    {
        lab100Class->setWindowTitle(QCoreApplication::translate("lab100Class", "lab100", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lab100Class: public Ui_lab100Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB100_H
