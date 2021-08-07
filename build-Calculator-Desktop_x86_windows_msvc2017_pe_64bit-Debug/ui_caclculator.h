/********************************************************************************
** Form generated from reading UI file 'caclculator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACLCULATOR_H
#define UI_CACLCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Caclculator
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *multi;
    QPushButton *div;
    QPushButton *three;
    QPushButton *six;
    QPushButton *nine;
    QPushButton *equal;
    QPushButton *two;
    QPushButton *five;
    QPushButton *eight;
    QPushButton *zero;
    QPushButton *one;
    QPushButton *four;
    QPushButton *seven;
    QPushButton *conversion;
    QPushButton *addbinary;
    QPushButton *cleascreen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Caclculator)
    {
        if (Caclculator->objectName().isEmpty())
            Caclculator->setObjectName(QString::fromUtf8("Caclculator"));
        Caclculator->resize(245, 417);
        Caclculator->setSizeIncrement(QSize(200, 202));
        centralwidget = new QWidget(Caclculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(0, 0, 241, 61));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(180, 60, 61, 61));
        plus->setSizeIncrement(QSize(50, 50));
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(180, 120, 61, 61));
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        multi = new QPushButton(centralwidget);
        multi->setObjectName(QString::fromUtf8("multi"));
        multi->setGeometry(QRect(180, 180, 61, 61));
        multi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        div = new QPushButton(centralwidget);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(180, 240, 61, 61));
        div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(120, 60, 61, 61));
        three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(120, 120, 61, 61));
        six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(120, 180, 61, 61));
        nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        equal = new QPushButton(centralwidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setGeometry(QRect(180, 300, 61, 61));
        equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(60, 60, 61, 61));
        two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(60, 120, 61, 61));
        five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(60, 180, 61, 61));
        eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(0, 240, 181, 61));
        zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(0, 60, 61, 61));
        one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(0, 120, 61, 61));
        four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(0, 180, 61, 61));
        seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        conversion = new QPushButton(centralwidget);
        conversion->setObjectName(QString::fromUtf8("conversion"));
        conversion->setGeometry(QRect(60, 300, 61, 61));
        conversion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        addbinary = new QPushButton(centralwidget);
        addbinary->setObjectName(QString::fromUtf8("addbinary"));
        addbinary->setGeometry(QRect(120, 300, 61, 61));
        addbinary->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        cleascreen = new QPushButton(centralwidget);
        cleascreen->setObjectName(QString::fromUtf8("cleascreen"));
        cleascreen->setGeometry(QRect(0, 300, 61, 61));
        cleascreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 165, 0);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        Caclculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Caclculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 245, 26));
        Caclculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Caclculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Caclculator->setStatusBar(statusbar);

        retranslateUi(Caclculator);

        QMetaObject::connectSlotsByName(Caclculator);
    } // setupUi

    void retranslateUi(QMainWindow *Caclculator)
    {
        Caclculator->setWindowTitle(QCoreApplication::translate("Caclculator", "Caclculator", nullptr));
        plus->setText(QCoreApplication::translate("Caclculator", "+", nullptr));
        minus->setText(QCoreApplication::translate("Caclculator", "-", nullptr));
        multi->setText(QCoreApplication::translate("Caclculator", "*", nullptr));
        div->setText(QCoreApplication::translate("Caclculator", "/", nullptr));
        three->setText(QCoreApplication::translate("Caclculator", "3", nullptr));
        six->setText(QCoreApplication::translate("Caclculator", "6", nullptr));
        nine->setText(QCoreApplication::translate("Caclculator", "9", nullptr));
        equal->setText(QCoreApplication::translate("Caclculator", "=", nullptr));
        two->setText(QCoreApplication::translate("Caclculator", "2", nullptr));
        five->setText(QCoreApplication::translate("Caclculator", "5", nullptr));
        eight->setText(QCoreApplication::translate("Caclculator", "8", nullptr));
        zero->setText(QCoreApplication::translate("Caclculator", "0", nullptr));
        one->setText(QCoreApplication::translate("Caclculator", "1", nullptr));
        four->setText(QCoreApplication::translate("Caclculator", "4", nullptr));
        seven->setText(QCoreApplication::translate("Caclculator", "7", nullptr));
        conversion->setText(QCoreApplication::translate("Caclculator", "D-B", nullptr));
        addbinary->setText(QCoreApplication::translate("Caclculator", "++", nullptr));
        cleascreen->setText(QCoreApplication::translate("Caclculator", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Caclculator: public Ui_Caclculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACLCULATOR_H
