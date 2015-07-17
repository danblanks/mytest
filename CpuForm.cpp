/*
 
 */

#include <QGridLayout>
#include <QLabel>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTextCursor>

#include "CpuForm.h"

CpuForm::CpuForm() {
    this->setMinimumSize(700, 800);

    QGridLayout *layout = new QGridLayout(this);
    int row = -1;

    // Title label
    row++;
    layout->addWidget(new QLabel("CPU information"), row, 0);

    // Text area
    row++;
    m_textArea = new QTextEdit(this);
    layout->addWidget(m_textArea, row, 0);

    QFile file("/proc/cpuinfo.txt");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Could not find file /proc/cpuinfo.txt");
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        process_line(line);
    }
    m_textArea->moveCursor(QTextCursor::Start);
}

CpuForm::~CpuForm() {
}

void CpuForm::process_line(const QString& line) {
    m_textArea->append(line);
}
