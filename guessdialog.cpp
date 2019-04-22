#include "guessdialog.h"
#include "ui_guessdialog.h"

GuessDialog::GuessDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GuessDialog)
{
    ui->setupUi(this);
}

GuessDialog::~GuessDialog()
{
    delete ui;
}
