#ifndef CACLCULATOR_H
#define CACLCULATOR_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class Caclculator; }
QT_END_NAMESPACE

class Caclculator : public QMainWindow
{
    Q_OBJECT

public:
    Caclculator(QWidget *parent = nullptr);
    ~Caclculator();
    void manageCalc(QString text);
    QString Caclculator:: getbinary(QString Number1);
    QString Caclculator:: addBinary(QString a, QString b);
  //  void Caclculator :: track();


private slots:


    void on_one_clicked();

    void on_two_clicked();

    void on_three_clicked();

    void on_plus_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_minus_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_multi_clicked();

    void on_zero_clicked();

    void on_equal_clicked();

    void on_div_clicked();

    void on_conversion_clicked();

    void on_addbinary_clicked();

    void on_cleascreen_clicked();

private:
    Ui::Caclculator *ui;
    QString Number1 = "";
    QString Number2 = "";
    QString OperationPress = "";
    bool Number2Exist= false;
    bool k= false;
    bool s= false;
    int arr[10];
    int  counter=0;
    char arro[6];
    int counter2=0;
    int i= counter-1;
    QString temp="";
    const QString c = "convert to binary =";
    //QString currentfile = "";
};
#endif // CACLCULATOR_H
