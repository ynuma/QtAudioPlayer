#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMultimedia>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    player_ = new QMediaPlayer;
    player_->setMedia(QUrl::fromLocalFile(ui->filePathLineEdit->text()));
    player_->setVolume(50);
    player_->play();
}
