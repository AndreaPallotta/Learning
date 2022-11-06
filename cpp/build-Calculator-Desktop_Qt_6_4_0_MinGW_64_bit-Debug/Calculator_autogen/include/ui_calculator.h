/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QGridLayout *gridLayout;
    QPushButton *Multiply;
    QPushButton *DecimalDot;
    QPushButton *Subtract;
    QLineEdit *Result;
    QPushButton *Button_6;
    QPushButton *Square;
    QPushButton *Divide;
    QPushButton *Equals;
    QPushButton *Button_0;
    QPushButton *Delete;
    QPushButton *Percentage;
    QPushButton *Button_9;
    QPushButton *Button_4;
    QPushButton *ClearAll;
    QPushButton *ClearEntry;
    QPushButton *Fraction;
    QPushButton *Button_2;
    QPushButton *Button_1;
    QPushButton *SignChange;
    QPushButton *Button_3;
    QPushButton *Button_5;
    QPushButton *Button_8;
    QPushButton *SquareRoot;
    QPushButton *Add;
    QPushButton *Button_7;
    QLabel *label;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(385, 395);
        Calculator->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #383B38;\n"
"	border: 0px solid black;\n"
"}"));
        gridLayout = new QGridLayout(Calculator);
        gridLayout->setObjectName("gridLayout");
        Multiply = new QPushButton(Calculator);
        Multiply->setObjectName("Multiply");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        Multiply->setFont(font);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Multiply, 5, 3, 1, 1);

        DecimalDot = new QPushButton(Calculator);
        DecimalDot->setObjectName("DecimalDot");
        DecimalDot->setFont(font);
        DecimalDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(DecimalDot, 8, 2, 1, 1);

        Subtract = new QPushButton(Calculator);
        Subtract->setObjectName("Subtract");
        Subtract->setFont(font);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Subtract, 6, 3, 1, 1);

        Result = new QLineEdit(Calculator);
        Result->setObjectName("Result");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Result->sizePolicy().hasHeightForWidth());
        Result->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        Result->setFont(font1);
        Result->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: #383B38;\n"
"	color: white;\n"
" 	border: 0px solid black;\n"
"}"));
        Result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Result, 1, 0, 1, 4);

        Button_6 = new QPushButton(Calculator);
        Button_6->setObjectName("Button_6");
        Button_6->setFont(font);
        Button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_6, 6, 2, 1, 1);

        Square = new QPushButton(Calculator);
        Square->setObjectName("Square");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        Square->setFont(font2);
        Square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Square, 4, 1, 1, 1);

        Divide = new QPushButton(Calculator);
        Divide->setObjectName("Divide");
        Divide->setFont(font);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Divide, 4, 3, 1, 1);

        Equals = new QPushButton(Calculator);
        Equals->setObjectName("Equals");
        Equals->setFont(font);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #6495ED;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #0000CD;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #0000CD;\n"
"}"));

        gridLayout->addWidget(Equals, 8, 3, 1, 1);

        Button_0 = new QPushButton(Calculator);
        Button_0->setObjectName("Button_0");
        Button_0->setFont(font);
        Button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_0, 8, 1, 1, 1);

        Delete = new QPushButton(Calculator);
        Delete->setObjectName("Delete");
        Delete->setFont(font);
        Delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Delete, 2, 3, 1, 1);

        Percentage = new QPushButton(Calculator);
        Percentage->setObjectName("Percentage");
        Percentage->setFont(font);
        Percentage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Percentage, 2, 0, 1, 1);

        Button_9 = new QPushButton(Calculator);
        Button_9->setObjectName("Button_9");
        Button_9->setFont(font);
        Button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_9, 5, 2, 1, 1);

        Button_4 = new QPushButton(Calculator);
        Button_4->setObjectName("Button_4");
        Button_4->setFont(font);
        Button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_4, 6, 0, 1, 1);

        ClearAll = new QPushButton(Calculator);
        ClearAll->setObjectName("ClearAll");
        ClearAll->setFont(font);
        ClearAll->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(ClearAll, 2, 2, 1, 1);

        ClearEntry = new QPushButton(Calculator);
        ClearEntry->setObjectName("ClearEntry");
        ClearEntry->setFont(font);
        ClearEntry->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(ClearEntry, 2, 1, 1, 1);

        Fraction = new QPushButton(Calculator);
        Fraction->setObjectName("Fraction");
        Fraction->setFont(font2);
        Fraction->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Fraction, 4, 0, 1, 1);

        Button_2 = new QPushButton(Calculator);
        Button_2->setObjectName("Button_2");
        Button_2->setFont(font);
        Button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_2, 7, 1, 1, 1);

        Button_1 = new QPushButton(Calculator);
        Button_1->setObjectName("Button_1");
        Button_1->setFont(font);
        Button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_1, 7, 0, 1, 1);

        SignChange = new QPushButton(Calculator);
        SignChange->setObjectName("SignChange");
        SignChange->setFont(font);
        SignChange->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(SignChange, 8, 0, 1, 1);

        Button_3 = new QPushButton(Calculator);
        Button_3->setObjectName("Button_3");
        Button_3->setFont(font);
        Button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_3, 7, 2, 1, 1);

        Button_5 = new QPushButton(Calculator);
        Button_5->setObjectName("Button_5");
        Button_5->setFont(font);
        Button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_5, 6, 1, 1, 1);

        Button_8 = new QPushButton(Calculator);
        Button_8->setObjectName("Button_8");
        Button_8->setFont(font);
        Button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_8, 5, 1, 1, 1);

        SquareRoot = new QPushButton(Calculator);
        SquareRoot->setObjectName("SquareRoot");
        SquareRoot->setFont(font2);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(SquareRoot, 4, 2, 1, 1);

        Add = new QPushButton(Calculator);
        Add->setObjectName("Add");
        Add->setFont(font);
        Add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: #242624;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Add, 7, 3, 1, 1);

        Button_7 = new QPushButton(Calculator);
        Button_7->setObjectName("Button_7");
        Button_7->setFont(font);
        Button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding: 5px;\n"
"	background-color: black;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #707070;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #707070;\n"
"}"));

        gridLayout->addWidget(Button_7, 5, 0, 1, 1);

        label = new QLabel(Calculator);
        label->setObjectName("label");
        QFont font3;
        font3.setPointSize(26);
        font3.setBold(true);
        font3.setItalic(false);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 4);


        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Multiply->setText(QCoreApplication::translate("Calculator", "\303\227", nullptr));
        DecimalDot->setText(QCoreApplication::translate("Calculator", ".", nullptr));
        Subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Result->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Square->setText(QCoreApplication::translate("Calculator", "x\302\262", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Delete->setText(QCoreApplication::translate("Calculator", " \342\214\253", nullptr));
        Percentage->setText(QCoreApplication::translate("Calculator", "%", nullptr));
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        ClearAll->setText(QCoreApplication::translate("Calculator", "C", nullptr));
        ClearEntry->setText(QCoreApplication::translate("Calculator", "CE", nullptr));
        Fraction->setText(QCoreApplication::translate("Calculator", "\342\205\237\342\202\223", nullptr));
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        SignChange->setText(QCoreApplication::translate("Calculator", "\302\261", nullptr));
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        SquareRoot->setText(QCoreApplication::translate("Calculator", "\342\210\232x", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        label->setText(QCoreApplication::translate("Calculator", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
