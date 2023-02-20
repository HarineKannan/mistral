#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SUBMIT_clicked()
{
   QString name=ui-> lineEdit_name->text();
   QString rollno=ui-> lineEdit_rollno->text();
   QString email=ui-> lineEdit_email->text();
   QString mobileno=ui-> lineEdit_mobileno->text();
   QString age=ui-> lineEdit_age->text();
   QString yos=ui-> lineEdit_yos->text();
   QString college=ui-> lineEdit_college->text();
   QString currentValue = ui->comboBox->currentText();
   qint8 a=name.length();
   qint8 b=rollno.length();
   qint8 c=email.length();
   qint8 d=mobileno.length();
   qint8 e=age.length();
   qint8 g=yos.length();
   qint8 h=college.length();

   if((a!=0 && b!=0 && c!=0 && d!=0 && e!=0  &&g!=0 && h!=0) && (currentValue>0)){
        QMessageBox::information(this,"Thank You dude","🙏🏻🙏🏻🙏🏻");
   }
   else
   {
       QMessageBox::warning(this,"Hey Dude","Fill the Details");
   }
}

