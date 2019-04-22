#ifndef GUESSDIALOG_H
#define GUESSDIALOG_H

#include <QDialog>

namespace Ui {
class GuessDialog;
}

class GuessDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GuessDialog(QWidget *parent = nullptr);
    ~GuessDialog();

private:
    Ui::GuessDialog *ui;
};

#endif // GUESSDIALOG_H
