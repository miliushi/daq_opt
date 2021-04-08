#include "window.h"
#include "ui_window.h"
#include <QList>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    settings = new QSettings("settings.conf",QSettings::NativeFormat);
    ui->cB_MWPC1->setChecked(settings->value("settings/MWPC1",false).toBool());
    ui->cB_MWPC2->setChecked(settings->value("settings/MWPC2",false).toBool());
    //ui->cB_DC1->setChecked(settings->value("settings/DC1",false).toBool());
    //ui->cB_DC2->setChecked(settings->value("settings/DC2",false).toBool());
    //ui->cB_DC3->setChecked(settings->value("settings/DC3",false).toBool());
    //ui->cB_DC4->setChecked(settings->value("settings/DC4",false).toBool());
    //ui->cB_DC5->setChecked(settings->value("settings/DC5",false).toBool());
    ui->cB_SupplementaryScalers->setChecked(settings->value("settings/SupplementaryScalers",false).toBool());
    ui->cB_VisualScaler->setChecked(settings->value("settings/VisualScaler",false).toBool());
    ui->cB_Calorimeter->setChecked(settings->value("settings/Calorimeter",false).toBool());
    //ui->cB_TDC->setChecked(settings->value("settings/TDC",false).toBool());
    //ui->cB_TOF1->setChecked(settings->value("settings/TOF1",false).toBool());
    ui->cB_TOF2->setChecked(settings->value("settings/TOF2",false).toBool());
    //ui->cB_WWW->setChecked(settings->value("settings/WWW",false).toBool());

}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_pb_Cancel_clicked()
{
    ui->cB_MWPC1->setChecked(false);
    ui->cB_MWPC2->setChecked(false);
    ui->cB_DC1->setChecked(false);
    ui->cB_DC2->setChecked(false);
    ui->cB_DC3->setChecked(false);
    ui->cB_DC4->setChecked(false);
    ui->cB_DC5->setChecked(false);
    ui->cB_SupplementaryScalers->setChecked(false);
    ui->cB_VisualScaler->setChecked(false);
    ui->cB_Calorimeter->setChecked(false);
    ui->cB_TDC->setChecked(false);
    ui->cB_TOF1->setChecked(false);
    ui->cB_TOF2->setChecked(false);
    ui->cB_WWW->setChecked(false);
}

void Dialog::on_pb_SelectAll_clicked()
{
    if(ui->cB_MWPC1->checkState() == Qt::Unchecked) ui->cB_MWPC1->setChecked(true);
    if(ui->cB_MWPC2->checkState() == Qt::Unchecked) ui->cB_MWPC2->setChecked(true);
    //if(ui->cB_DC1->checkState() == Qt::Unchecked) ui->cB_DC1->setChecked(true);
    //if(ui->cB_DC2->checkState() == Qt::Unchecked) ui->cB_DC2->setChecked(true);
    //if(ui->cB_DC3->checkState() == Qt::Unchecked) ui->cB_DC3->setChecked(true);
    //if(ui->cB_DC4->checkState() == Qt::Unchecked) ui->cB_DC4->setChecked(true);
    //if(ui->cB_DC5->checkState() == Qt::Unchecked) ui->cB_DC5->setChecked(true);
    if(ui->cB_SupplementaryScalers->checkState() == Qt::Unchecked) ui->cB_SupplementaryScalers->setChecked(true);
    if(ui->cB_VisualScaler->checkState() == Qt::Unchecked) ui->cB_VisualScaler->setChecked(true);
    if(ui->cB_Calorimeter->checkState() == Qt::Unchecked) ui->cB_Calorimeter->setChecked(true);
    //if(ui->cB_TDC->checkState() == Qt::Unchecked) ui->cB_TDC->setChecked(true);
    //if(ui->cB_TOF1->checkState() == Qt::Unchecked) ui->cB_TOF1->setChecked(true);
    if(ui->cB_TOF2->checkState() == Qt::Unchecked) ui->cB_TOF2->setChecked(true);
    //if(ui->cB_WWW->checkState() == Qt::Unchecked) ui->cB_WWW->setChecked(true);

}

void Dialog::on_pb_RUN_clicked()
{
    settings->setValue("settings/MWPC1",ui->cB_MWPC1->checkState());
    settings->setValue("settings/MWPC2",ui->cB_MWPC2->checkState());
    //settings->setValue("settings/DC1",ui->cB_DC1->checkState());
    //settings->setValue("settings/DC2",ui->cB_DC2->checkState());
    //settings->setValue("settings/DC3",ui->cB_DC3->checkState());
    //settings->setValue("settings/DC4",ui->cB_DC4->checkState());
    //settings->setValue("settings/DC5",ui->cB_DC5->checkState());
    settings->setValue("settings/SupplementaryScalers",ui->cB_SupplementaryScalers->checkState());
    settings->setValue("settings/VisualScaler",ui->cB_VisualScaler->checkState());
    settings->setValue("settings/Calorimeter",ui->cB_Calorimeter->checkState());
    //settings->setValue("settings/TDC",ui->cB_TDC->checkState());
    //settings->setValue("settings/TOF1",ui->cB_TOF1->checkState());
    settings->setValue("settings/TOF2",ui->cB_TOF2->checkState());
    //settings->setValue("settings/WWW",ui->cB_WWW->checkState());

    settings->sync();
    QApplication::quit();

}
