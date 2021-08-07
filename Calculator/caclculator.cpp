#include "caclculator.h"
#include "ui_caclculator.h"

Caclculator::Caclculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Caclculator)
{
    ui->setupUi(this);
}

Caclculator::~Caclculator()
{
    delete ui;
}

void Caclculator ::manageCalc(QString Text){
int i= counter-1;
 temp="";
 temp=Text;
       Number1 += Text;
        ui->lineEdit ->setText(ui->lineEdit->text()+temp);




}







void Caclculator::on_one_clicked()
{

    manageCalc(ui->one->text());
}

void Caclculator::on_two_clicked()
{
    manageCalc(ui->two->text());
}

void Caclculator::on_three_clicked()
{
    manageCalc(ui->three->text());
}

void Caclculator::on_plus_clicked()
{
    OperationPress = ui->plus->text();
  ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
    arr[counter++]= Number1.toInt();
    arro[++counter2] = '+';
    Number1="";
        /*
    else {
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";
        ui->lineEdit ->setText("Error :multible operations are not allowed");
    }*/


}


void Caclculator::on_four_clicked()
{
    manageCalc(ui->four->text());
}

void Caclculator::on_five_clicked()
{
    manageCalc(ui->five->text());
}

void Caclculator::on_six_clicked()
{
    manageCalc(ui->six->text());
}

void Caclculator::on_minus_clicked()
{
    OperationPress = ui->minus->text();
  ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
    arr[counter++]= Number1.toInt();
    arro[++counter2] = '-';
    Number1="";
}

void Caclculator::on_seven_clicked()
{
    manageCalc(ui->seven->text());
}

void Caclculator::on_eight_clicked()
{
    manageCalc(ui->eight->text());
}

void Caclculator::on_nine_clicked()
{
    manageCalc(ui->nine->text());
}

void Caclculator::on_multi_clicked()
{
    if (OperationPress == ""){
        OperationPress = ui->multi->text();
        ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
    }
    else {
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";
        ui->lineEdit ->setText("Error :multible operations are not allowed");
    }
}

void Caclculator::on_zero_clicked()
{
    manageCalc(ui->zero->text());
}

void Caclculator::on_conversion_clicked()
{
    if (OperationPress == ""){

        OperationPress = ui->conversion->text();
        Number1 = getbinary(Number1);

        ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
    }
    else   ui->lineEdit ->setText("Error :multible operations are not allowed");

}

void Caclculator::on_addbinary_clicked()
{
 if (OperationPress == ""){
      OperationPress = ui->addbinary->text();
 }
ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
k =true;
}

void Caclculator::on_div_clicked()
{
    if (OperationPress == ""){
        OperationPress = ui->div->text();
        ui->lineEdit ->setText(ui->lineEdit->text()+OperationPress);
    }
    else {
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";
        ui->lineEdit ->setText("Error :multible operations are not allowed");
    }
}
QString Caclculator:: getbinary(QString a){

    int m = a.toInt();
        int* binaryNum = new int[32];
        int i = 0;
        while (m > 0) {

            binaryNum[i] = m % 2;
            m = m / 2;
            i++;
        }
        int counter = 1; QString h = "";
        for (int j = i - 1; j >= 0; j--) {
            h+=QString::number(binaryNum[j]);
            counter++;
        }
        return h;
}
QString Caclculator::  addBinary(QString a, QString b) {
    int num1 = a.toInt();
    int num2 = b.toInt();
    int c;
    int mod1 = 0;
    int mod2 = 0;
    int carry = 0;
    int factor = 1;

    bool flag = 1;

    c = 0;

    while (flag) {
       mod1 = num1 % 10;
        mod2 = num2 % 10;

        num1 /= 10;
        num2 /= 10;
        if ((carry + mod1 + mod2) == 2) {
            c += 0;
            carry = 1;
        }
        else if ((carry + mod1 + mod2) == 3) {
            c += factor;
            carry = 1;
        }
        else if ((carry + mod1 + mod2) == 0) {
           c += 0;
            carry = 0;
        }
        else {
            c += factor;
            carry = 0;
        }
        factor *= 10;
        if ((num1 == 0) && (num2 == 0)) {
            c += carry * factor;
            flag = 0;
        }
    }

    QString result = QString::number(c);
    return result;
}
void Caclculator::on_equal_clicked()
{
    arr[counter]=Number1.toInt();
    int result=0;
    for (int j=0;j<=counter;j++){

    if (arro[j]=='-') result-=arr[j];
    else result+= arr[j];
    }
    ui->lineEdit ->setText(QString::number(result));
    /*
    if (s){  ui->lineEdit ->setText("Error :multible operations are not allowed");}
   else {
    if (OperationPress == "++"||k==1){
        Number1=getbinary(Number1);
         Number2=getbinary(Number2);
         addBinary(Number1,Number2);
          ui->lineEdit ->setText(Number1 + " ++ "+ Number2 + " == "+addBinary(Number1,Number2));

    }
    else {
    if (OperationPress == "D-B"){
         ui->lineEdit ->setText(QString::number(Number1.toInt()));

    }
    else {
    if (OperationPress == ""){
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";
        ui->lineEdit ->setText("Error : no operation");
    }


    if (!Number2Exist){
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";
        ui->lineEdit ->setText("Error : no second number");
    }
    if (OperationPress == "+"){
        ui->lineEdit ->setText(QString::number(Number1.toInt()+Number2.toInt()));
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";

    }
    else if (OperationPress == "-"){
        ui->lineEdit ->setText(QString::number(Number1.toInt()-Number2.toInt()));
    }
    else if (OperationPress == "*"){
        ui->lineEdit ->setText(QString::number(Number1.toInt()*Number2.toInt()));

    }
    else {
        if (Number2=="0"){
            Number2 = "";
            Number1 = "";
            Number2Exist = false;
            OperationPress= "";
            ui->lineEdit ->setText("Error /0");
            return ;
        }

        ui->lineEdit ->setText(QString::number(Number1.toInt()/Number2.toInt()));
        Number2 = "";
        Number1 = "";
        Number2Exist = false;
        OperationPress= "";

    }}
    }
     s= 1;}*/
}





void Caclculator::on_cleascreen_clicked()
{
    Number2 = "";
    Number1 = "";
    Number2Exist = false;
    OperationPress= "";
    s=0;
     ui->lineEdit ->setText(" ");
}
