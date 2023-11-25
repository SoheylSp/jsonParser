#include "persons.h"

Persons::Persons(QObject *parent) : QObject(parent)
{

    //Open the Json File

    QString const filePath  = "qrc:/jsonData.json";

    QFile file (filePath);

    if(file.open(QIODevice::ReadOnly)){

        //Read the contents of the file
        QByteArray jsonData = file.readAll();


        //Parse the json Data
        QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
        QJsonArray jsonArray = jsonDoc.array();

        //Convert the JsonArray to a QVariantList

        m_people = jsonArray.toVariantList();

        //Close the file
        file.close();

    }

}

QVariantList Persons::getPeople() const
{
    return m_people ;
}
