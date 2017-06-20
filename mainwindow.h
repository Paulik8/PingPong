#include <QMainWindow>
class Moving;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void addScore(int count);

private:
    Ui::MainWindow *ui;
    Moving *Loop;
    int Score;
};
