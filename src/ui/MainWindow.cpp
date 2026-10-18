#include "MainWindow.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
    setWindowTitle("Окно поиска наушников");
    setMinimumWidth(1000);
    setMinimumHeight(1000);
    //QLabel* FirstWindow = new QLabel("ПО для наушников Sony WH-1000XM4", this);
    //QVBoxLayout* centr = new QVBoxLayout(MainWindow);
    //MainWindow->addWidget(FirstWindow)
}

