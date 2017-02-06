#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("Untitled1.png");
    ui->logo->setPixmap(pix);
    ui->strategy_choosen->addItem("Potential Fields");
    connect(ui->setParameters, SIGNAL(clicked(bool)), this, SLOT(openSetParameters()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSetParameters()
{
    setparam = new SetParameters;
    setparam->setAttribute( Qt::WA_DeleteOnClose );
    setparam->show();
}



void MainWindow::on_pushButton_5_clicked()
{
    soccer = new soccer_window;
    soccer->setAttribute( Qt::WA_DeleteOnClose );
    soccer->show();
}
