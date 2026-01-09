/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *display;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButton5;
    QPushButton *pushButton4;
    QPushButton *pushButton6;
    QPushButton *pushButton2;
    QPushButton *pushButton1;
    QPushButton *pushButton3;
    QPushButton *pushButtonAC;
    QPushButton *pushButtonEQ;
    QPushButton *pushButtonDIV;
    QPushButton *pushButtonMIN;
    QPushButton *pushButtonPLUS;
    QPushButton *pushButtonMULTI;
    QPushButton *pushButton_0;
    QPushButton *pushButton_20;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(377, 523);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 125, 170)\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        display = new QLabel(centralwidget);
        display->setObjectName("display");
        display->setGeometry(QRect(30, 60, 311, 91));
        QFont font;
        font.setBold(true);
        display->setFont(font);
        display->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-alignment:'AlignVCenter|AlignRight';\n"
"border-color: pink;\n"
"background-color: rgb(255, 212, 231);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 12px;\n"
"font-size: 40px;\n"
"}"));
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setGeometry(QRect(20, 200, 61, 61));
        pushButton7->setFont(font);
        pushButton7->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
"border:12px rgb(0, 0, 0);"));
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setGeometry(QRect(100, 200, 61, 61));
        pushButton8->setFont(font);
        pushButton8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
"border:12px rgb(0, 0, 0);"));
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setGeometry(QRect(180, 200, 61, 61));
        pushButton9->setFont(font);
        pushButton9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
"border:12px rgb(0, 0, 0);"));
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setGeometry(QRect(100, 280, 61, 61));
        pushButton5->setFont(font);
        pushButton5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setGeometry(QRect(20, 280, 61, 61));
        pushButton4->setFont(font);
        pushButton4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setGeometry(QRect(180, 280, 61, 61));
        pushButton6->setFont(font);
        pushButton6->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(100, 360, 61, 61));
        pushButton2->setFont(font);
        pushButton2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(20, 360, 61, 61));
        pushButton1->setFont(font);
        pushButton1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(180, 360, 61, 61));
        pushButton3->setFont(font);
        pushButton3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButtonAC = new QPushButton(centralwidget);
        pushButtonAC->setObjectName("pushButtonAC");
        pushButtonAC->setGeometry(QRect(20, 440, 61, 61));
        pushButtonAC->setFont(font);
        pushButtonAC->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButtonEQ = new QPushButton(centralwidget);
        pushButtonEQ->setObjectName("pushButtonEQ");
        pushButtonEQ->setGeometry(QRect(180, 440, 61, 61));
        pushButtonEQ->setFont(font);
        pushButtonEQ->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButtonDIV = new QPushButton(centralwidget);
        pushButtonDIV->setObjectName("pushButtonDIV");
        pushButtonDIV->setGeometry(QRect(280, 200, 66, 66));
        pushButtonDIV->setFont(font);
        pushButtonDIV->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
"border:12px rgb(0, 0, 0);"));
        pushButtonMIN = new QPushButton(centralwidget);
        pushButtonMIN->setObjectName("pushButtonMIN");
        pushButtonMIN->setGeometry(QRect(280, 360, 66, 66));
        pushButtonMIN->setFont(font);
        pushButtonMIN->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButtonPLUS = new QPushButton(centralwidget);
        pushButtonPLUS->setObjectName("pushButtonPLUS");
        pushButtonPLUS->setGeometry(QRect(280, 440, 66, 66));
        pushButtonPLUS->setFont(font);
        pushButtonPLUS->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButtonMULTI = new QPushButton(centralwidget);
        pushButtonMULTI->setObjectName("pushButtonMULTI");
        pushButtonMULTI->setGeometry(QRect(280, 280, 66, 66));
        pushButtonMULTI->setFont(font);
        pushButtonMULTI->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(100, 440, 61, 61));
        pushButton_0->setFont(font);
        pushButton_0->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color:rgb(255, 221, 234);\n"
"border-radius: 20px;\n"
"font-size: 25px;\n"
""));
        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(-90, 160, 61, 61));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", " 0 ", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButtonAC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        pushButtonEQ->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButtonDIV->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonMIN->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonPLUS->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonMULTI->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
