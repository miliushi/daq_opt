#ifndef WINDOW_H
#define WINDOW_H

#include <QDialog>
#include <QSettings>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void on_pb_Cancel_clicked();

    void on_pb_SelectAll_clicked();

    void on_pb_RUN_clicked();

private:
    Ui::Dialog *ui;
    QSettings *settings;
};

#endif // DIALOG_H
