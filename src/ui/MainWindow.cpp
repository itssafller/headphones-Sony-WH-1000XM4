#include "MainWindow.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QMessageBox>
MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {
    
    setStyleSheet("#mainWindow { border-image: url(:/background.png) 0 0 0 0 stretch stretch; }");
    setMinimumWidth(1000);
    setMinimumHeight(1000);
    QWidget* centralWidget = new QWidget(this);// виджет на котором я работаю
    setCentralWidget(centralWidget);

    QLabel* FirstWindow = new QLabel("ПО для наушников Sony WH-1000XM4", this);// просто текст с которым я работаю
    
    QVBoxLayout* centr = new QVBoxLayout(centralWidget);// отвечает за расположение виджетов 
    centr->addWidget(FirstWindow);


    /*
    centralWidget->setStyleSheet("#central { border-image: url(:/background.png) 0 0 0 0 stretch stretch; }");
    centralWidget->setAttribute(Qt::WA_StyledBackground, true);
    */
    QPushButton* StarBtn=new QPushButton("Текст", centralWidget);
    QObject::connect(StarBtn, &QPushButton::clicked, onClick);


    centr->addWidget(StarBtn);
    
    
    QFont font = FirstWindow->font();// часть в  которой я редачу текст
    font.setPointSize(20);
    font.setBold(true);
    FirstWindow->setStyleSheet("color: blue;");
    font.setFamily("Playfair Display");

    FirstWindow->setFont(font);

    FirstWindow->setAlignment(Qt::AlignCenter);
    centr->setContentsMargins(0,0,0,415);
    centralWidget->setStyleSheet("#central { background-color: red; }");

}
void onClick() {
    QMessageBox msgBox;    
    msgBox.setText("!"); 
    msgBox.exec();
}
