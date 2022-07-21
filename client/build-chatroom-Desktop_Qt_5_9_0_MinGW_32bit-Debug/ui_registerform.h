/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterForm
{
public:
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *accountLabel;
    QLabel *passwordLabel;
    QLabel *usernameLabel;
    QLineEdit *accountLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *usernameLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *submitPushButton;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *RegisterForm)
    {
        if (RegisterForm->objectName().isEmpty())
            RegisterForm->setObjectName(QStringLiteral("RegisterForm"));
        RegisterForm->resize(400, 300);
        widget2 = new QWidget(RegisterForm);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 63, 382, 121));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget2->sizePolicy().hasHeightForWidth());
        widget2->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        accountLabel = new QLabel(widget2);
        accountLabel->setObjectName(QStringLiteral("accountLabel"));

        gridLayout_3->addWidget(accountLabel, 0, 1, 1, 1);

        passwordLabel = new QLabel(widget2);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        gridLayout_3->addWidget(passwordLabel, 2, 1, 1, 1);

        usernameLabel = new QLabel(widget2);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        gridLayout_3->addWidget(usernameLabel, 1, 1, 1, 1);

        accountLineEdit = new QLineEdit(widget2);
        accountLineEdit->setObjectName(QStringLiteral("accountLineEdit"));
        accountLineEdit->setMaxLength(6);

        gridLayout_3->addWidget(accountLineEdit, 0, 2, 1, 1);

        passwordLineEdit = new QLineEdit(widget2);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setMaxLength(16);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(passwordLineEdit, 2, 2, 1, 1);

        usernameLineEdit = new QLineEdit(widget2);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));
        usernameLineEdit->setMaxLength(9);

        gridLayout_3->addWidget(usernameLineEdit, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        widget = new QWidget(RegisterForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 190, 382, 61));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_8 = new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        submitPushButton = new QPushButton(widget);
        submitPushButton->setObjectName(QStringLiteral("submitPushButton"));

        gridLayout_4->addWidget(submitPushButton, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        retranslateUi(RegisterForm);

        QMetaObject::connectSlotsByName(RegisterForm);
    } // setupUi

    void retranslateUi(QWidget *RegisterForm)
    {
        RegisterForm->setWindowTitle(QApplication::translate("RegisterForm", "\346\263\250\345\206\214\347\252\227\345\217\243", Q_NULLPTR));
        accountLabel->setText(QApplication::translate("RegisterForm", "\350\264\246\345\217\267", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("RegisterForm", "\345\257\206\347\240\201", Q_NULLPTR));
        usernameLabel->setText(QApplication::translate("RegisterForm", "\346\230\265\347\247\260", Q_NULLPTR));
        submitPushButton->setText(QApplication::translate("RegisterForm", "\346\217\220\344\272\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegisterForm: public Ui_RegisterForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
