#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_close_clicked()
{
    QApplication::quit();
}


void Dialog::on_pushButton_send_clicked()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok, QFont("Arail[Cronyx]", 10), this);

    if(ok)
    {
        ui->textEdit->setFont(font);
    }
}

