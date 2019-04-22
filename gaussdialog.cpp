#include "gaussdialog.h"
#include "ui_Gaussdialog.h"

GaussDialog::GaussDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GaussDialog)
{
    ui->setupUi(this);
}

GaussDialog::~GaussDialog()
{
    delete ui;
}
