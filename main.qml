import QtQuick 2.12
import QtQuick.Window 2.12
import com.persons 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Persons{id:persons}

    ListView{

        width: parent.width
        height: parent.height
        anchors.fill: parent


        model:persons.getPeople()

        delegate:Rectangle{

            width: parent.width
            height: parent.height - 30
            visible: true


            Text{

            text:persons.getPeople()[name].toString();
            font.pixelSize: 20
            color: "black"

        }}
    }
}
