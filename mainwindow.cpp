#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    move(500, 250);
    QObject::connect(logic, SIGNAL(cambiarLabel(int)), this, SLOT(pintarLabel(int)));
    QObject::connect(logic, SIGNAL(moverLabels()), this, SLOT(atender()));
    logic->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::mover(){
    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    animation->setDuration(1000);
    animation->setStartValue(QRect(500, 250, 100, 30));
    animation->setEndValue(QRect(0, 0, 100, 30));
    animation->start();
}

void MainWindow::pintarLabel(int index){
    switch (index) {
    case 0:
        ui->lblEstudiante1->setText("1");
        break;
    case 1:
        ui->lblEstudiante2->setText("2");
        break;
    case 2:
        ui->lblEstudiante3->setText("3");
        break;
    case 3:
        ui->lblEstudiante4->setText("4");
        break;
    case 4:
        ui->lblEstudiante5->setText("5");
        break;
    case 5:
        ui->lblEstudiante6->setText("6");
        break;
    case 6:
        ui->lblEstudiante7->setText("7");
        break;
    case 7:
        ui->lblEstudiante8->setText("8");
        break;
    case 8:
        ui->lblEstudiante9->setText("9");
        break;
    case 9:
        ui->lblEstudiante10->setText("10");
        break;
    }
}

void MainWindow::wait(){
    clock_t startTime = clock(); //Start timer
    double secondsPassed;
    double secondsToDelay = 1;
    bool flag = true;
    while(flag){
        secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
        if(secondsPassed >= secondsToDelay){
            flag = false;
            cout << "han pasado " << secondsPassed << " sec" << endl;
        }
    }
}

void MainWindow::atender(){
    srand (time(NULL));
    int mostrador = rand() % 3 + 1;

    switch (mostrador) {
    case 1:
        ui->lblMostrador1->setText(ui->lblEstudiante1->text());
        ui->lblEstudiante1->setText(ui->lblEstudiante2->text());
        ui->lblEstudiante2->setText(ui->lblEstudiante3->text());
        ui->lblEstudiante3->setText(ui->lblEstudiante4->text());
        ui->lblEstudiante4->setText(ui->lblEstudiante5->text());
        ui->lblEstudiante5->setText(ui->lblEstudiante6->text());
        ui->lblEstudiante6->setText(ui->lblEstudiante7->text());
        ui->lblEstudiante7->setText(ui->lblEstudiante8->text());
        ui->lblEstudiante8->setText(ui->lblEstudiante9->text());
        ui->lblEstudiante9->setText(ui->lblEstudiante10->text());
        ui->lblEstudiante10->setText("");
        break;
    case 2:
        ui->lblMostrador2->setText(ui->lblEstudiante1->text());
        ui->lblEstudiante1->setText(ui->lblEstudiante2->text());
        ui->lblEstudiante2->setText(ui->lblEstudiante3->text());
        ui->lblEstudiante3->setText(ui->lblEstudiante4->text());
        ui->lblEstudiante4->setText(ui->lblEstudiante5->text());
        ui->lblEstudiante5->setText(ui->lblEstudiante6->text());
        ui->lblEstudiante6->setText(ui->lblEstudiante7->text());
        ui->lblEstudiante7->setText(ui->lblEstudiante8->text());
        ui->lblEstudiante8->setText(ui->lblEstudiante9->text());
        ui->lblEstudiante9->setText(ui->lblEstudiante10->text());
        ui->lblEstudiante10->setText("");
        break;
    case 3:
        ui->lblMostrador3->setText(ui->lblEstudiante1->text());
        ui->lblEstudiante1->setText(ui->lblEstudiante2->text());
        ui->lblEstudiante2->setText(ui->lblEstudiante3->text());
        ui->lblEstudiante3->setText(ui->lblEstudiante4->text());
        ui->lblEstudiante4->setText(ui->lblEstudiante5->text());
        ui->lblEstudiante5->setText(ui->lblEstudiante6->text());
        ui->lblEstudiante6->setText(ui->lblEstudiante7->text());
        ui->lblEstudiante7->setText(ui->lblEstudiante8->text());
        ui->lblEstudiante8->setText(ui->lblEstudiante9->text());
        ui->lblEstudiante9->setText(ui->lblEstudiante10->text());
        ui->lblEstudiante10->setText("");
        break;
    default:
        break;
    }


}