#ifndef PERSONS_H
#define PERSONS_H

#include <QObject>
#include <QVariantList>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>



class Persons : public QObject
{
    Q_OBJECT
public:
    explicit Persons(QObject *parent = nullptr);

    Q_INVOKABLE QVariantList getPeople() const ;

private:

    QVariantList m_people ;

signals:

};

#endif // PERSONS_H
