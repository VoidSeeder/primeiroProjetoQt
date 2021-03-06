#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setOperationClicked();
    void cleanOperationClicked();
    void doOperation();

private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btn4_clicked();

    void on_btn5_clicked();

    void on_btn6_clicked();

    void on_btn7_clicked();

    void on_btn8_clicked();

    void on_btn9_clicked();

    void on_btn0_clicked();

    void on_btnPlus_clicked();

    void on_btnClear_clicked();

    void on_btnEquals_clicked();

    void on_btnMinus_clicked();

    void on_btnTimes_clicked();

    void on_btnDivide_clicked();

    void on_btnDot_clicked();

private:
    Ui::MainWindow *ui;
    char operationSymbol = ' ';
    double memNumber = 0.0;
    bool operationClicked = false;
};
#endif // MAINWINDOW_H
