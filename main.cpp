#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int calc(int offset, int age) {

    if(offset == 0) qFatal("Offset can not be zero!");

    if(age <= 0 || age > 120) {
        //Make sure to stop the application
        qFatal("Invalid age");
    }

    return offset * age;
}

int catYears(int age) {
    return calc(9,age);
}

int dogYears(int age) {
    return calc(7,age);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age:";
    cin >> age;

    qInfo() << "You are " << dogYears(age) << " in dog years";
    qInfo() << "You are " << catYears(age) << " in cat years";
    return a.exec();
}
