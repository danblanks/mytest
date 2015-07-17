/*
 
 */

#ifndef _HELLOFORM_H
#define	_HELLOFORM_H

#include "ui_HelloForm.h"

class QTextEdit;

class CpuForm : public QDialog {
    Q_OBJECT
public:
    CpuForm();
    virtual ~CpuForm();
public slots:
private: // functions
    void process_line(const QString &line);
    
private: // members
QTextEdit *m_textArea;    
//    Ui::CpuInfoDisplay widget;
};

#endif	/* _HELLOFORM_H */
