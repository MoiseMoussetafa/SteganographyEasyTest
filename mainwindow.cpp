#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Open the explorer to choose a text file
    QString fileName = QFileDialog::getOpenFileName(this, tr("Choose a text file"), "", tr("Text Files (*.txt)"));

    // Open the selected text file
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    // Read the text file
    QTextStream in(&file);
    QString word;
    while (!in.atEnd()) {
        // Read each line of the text file
        QString line = in.readLine();

        // If nothing in the line because of line break, just continue
        if (line.trimmed().isEmpty())
            continue;

        // Add every first letter of a line to the variable "word"
        word.append(line[0]);
    }

    // Result : "word" in the textBrowser
    ui->textBrowser->setText(word);
}
