#include <QApplication>

#include <QStringList>

#include <QtQml/qqmlengine.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>

#include "CpuForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    QStringList outList;
    QFile file("/proc/cpuinfo.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return 0;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        outList.append(line);
    }
    QQuickView view;
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", QVariant::fromValue(outList));
    view.setSource(QUrl("qrc:view.qml"));
    view.show();

    return app.exec();
}

#if 0
int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    CpuForm form;
    form.show();
    return app.exec();
}
#endif