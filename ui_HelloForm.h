/********************************************************************************
** Form generated from reading UI file 'HelloForm.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef CPU_FORM_H
#define CPU_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_CpuInfoDisplay
{
public:
    QLabel *label;

    void setupUi(QDialog *CpuInfoDisplay)
    {
        if (CpuInfoDisplay->objectName().isEmpty())
            CpuInfoDisplay->setObjectName(QStringLiteral("CpuInfoDisplay"));
        CpuInfoDisplay->resize(548, 673);
        label = new QLabel(CpuInfoDisplay);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 361, 18));

        retranslateUi(CpuInfoDisplay);

        QMetaObject::connectSlotsByName(CpuInfoDisplay);
    } // setupUi

    void retranslateUi(QDialog *CpuInfoDisplay)
    {
        CpuInfoDisplay->setWindowTitle(QApplication::translate("CpuInfoDisplay", "CPU Info", 0));
        label->setText(QApplication::translate("CpuInfoDisplay", "CPU Information", 0));
    } // retranslateUi

};

namespace Ui {
    class CpuInfoDisplay: public Ui_CpuInfoDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // CPU_FORM_H
