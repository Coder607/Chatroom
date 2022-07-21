/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QListWidget *contentListWidget;
    QTextEdit *inputTextEdit;
    QPushButton *sendTextPushButton;
    QPushButton *sendImagePushButton;
    QPushButton *exitPushButton;
    QListWidget *noticeListWidget;
    QListWidget *onlineListWidget;
    QLabel *label;
    QLabel *onlineLabel;
    QLabel *userLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(965, 745);
        Widget->setMinimumSize(QSize(965, 745));
        Widget->setMaximumSize(QSize(965, 745));
        contentListWidget = new QListWidget(Widget);
        contentListWidget->setObjectName(QStringLiteral("contentListWidget"));
        contentListWidget->setGeometry(QRect(10, 40, 681, 411));
        inputTextEdit = new QTextEdit(Widget);
        inputTextEdit->setObjectName(QStringLiteral("inputTextEdit"));
        inputTextEdit->setGeometry(QRect(10, 460, 681, 211));
        sendTextPushButton = new QPushButton(Widget);
        sendTextPushButton->setObjectName(QStringLiteral("sendTextPushButton"));
        sendTextPushButton->setGeometry(QRect(610, 690, 80, 31));
        sendImagePushButton = new QPushButton(Widget);
        sendImagePushButton->setObjectName(QStringLiteral("sendImagePushButton"));
        sendImagePushButton->setGeometry(QRect(520, 690, 80, 31));
        exitPushButton = new QPushButton(Widget);
        exitPushButton->setObjectName(QStringLiteral("exitPushButton"));
        exitPushButton->setGeometry(QRect(10, 690, 80, 31));
        noticeListWidget = new QListWidget(Widget);
        noticeListWidget->setObjectName(QStringLiteral("noticeListWidget"));
        noticeListWidget->setGeometry(QRect(710, 40, 231, 271));
        onlineListWidget = new QListWidget(Widget);
        onlineListWidget->setObjectName(QStringLiteral("onlineListWidget"));
        onlineListWidget->setGeometry(QRect(710, 350, 231, 321));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 10, 51, 21));
        onlineLabel = new QLabel(Widget);
        onlineLabel->setObjectName(QStringLiteral("onlineLabel"));
        onlineLabel->setGeometry(QRect(770, 320, 151, 20));
        userLabel = new QLabel(Widget);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(310, 10, 191, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\350\201\212\345\244\251\345\256\244", Q_NULLPTR));
        sendTextPushButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\346\234\254", Q_NULLPTR));
        sendImagePushButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\345\233\276\347\211\207", Q_NULLPTR));
        exitPushButton->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\345\205\254\345\221\212", Q_NULLPTR));
        onlineLabel->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\345\234\250\347\272\277\344\272\272\346\225\260(0\344\272\272)", Q_NULLPTR));
        userLabel->setText(QApplication::translate("Widget", "\350\201\212\345\244\251\345\206\205\345\256\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
