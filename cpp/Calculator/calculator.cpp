#include "calculator.h"
#include "./ui_calculator.h"
#include "qpushbutton.h"
#include "ui_calculator.h"

double calcValue = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    ui->Result->setText(QString::number(calcValue));

    QPushButton *numButtons[10];

    for (int i = 0; i < 10; ++i) {
        QString butName = "Button_" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butValue = button->text();
    QString displayValue = ui->Result->text();

    if ((displayValue.toDouble() == 0) || (displayValue.toDouble() == 0.0)) {
        ui->Result->setText(butValue);
    } else {
        QString newVal = displayValue + butValue;
        ui->Result->setText(newVal);
    }
}

void Calculator::MathButtonPressed() {}
void Calculator::EqualButton() {}
void Calculator::ChangeNumberSign() {}
