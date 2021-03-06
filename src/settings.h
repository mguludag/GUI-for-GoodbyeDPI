#ifndef SETTINGS_H
#define SETTINGS_H

#include <QWidget>
#include <QSettings>
#include <QCloseEvent>
#include <QEventLoop>

namespace Ui {
class Settings;
}

class Settings : public QWidget
{
    Q_OBJECT

public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();
    void schtasks(QString arg);

    void ayarKayit();

protected:
    void closeEvent(QCloseEvent *event) override;

public slots:
    void onCheckedDefaultParam();
    void onCheckedCustomParam();
    void onCheckedSystemTray();
    void onCheckedStartup();
    void onCheckedSchedule();
    void onCheckedNotification();

    void onCheckedQuickSettings();

    void onCheckedP();
    void onCheckedR();
    void onCheckedS();
    void onCheckedM();
    void onCheckedF();
    void onCheckedK();
    void onCheckedN();
    void onCheckedE();
    void onCheckedA();
    void onCheckedW();
    void onCheckedPort();
    void onCheckedIpId();
    void onCheckedDnsAddr();
    void onCheckedDnsPort();
    void onCheckedDnsv6Addr();
    void onCheckedDnsv6Port();
    void onCheckedBlacklist();

    void onCheckedRadioQuick1();
    void onCheckedRadioQuick2();
    void onCheckedRadioQuick3();
    void onCheckedRadioQuick4();

    void resetSettings();
    void loadSettings();

signals:
    void defaultParamStateChanged(Qt::CheckState state);
    void updateParameters();
    void isClosed();

private slots:
    void on_scheduleBox_toggled(bool checked);



    void on_comboBox_currentIndexChanged(int index);

    void on_checkBox_1_toggled(bool checked);

    void on_checkBox_2_toggled(bool checked);

    void on_checkBox_3_toggled(bool checked);

    void on_checkBox_4_toggled(bool checked);

    void on_checkBox_5_toggled(bool checked);

    void on_checkBox_6_toggled(bool checked);

    void on_checkBox_7_toggled(bool checked);

    void on_checkBox_upd_toggled(bool checked);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

private:
    Ui::Settings *ui;
    QSettings *ayarR;

    int spinFValue;
    int spinKValue;
    int spinEValue;
    int spinPortValue;
    QString lineIpIdValue;

    QString lineDnsAddrValue;
    int spinDnsPortValue;
    QString lineDnsv6AddrValue;
    int spinDnsv6PortValue;
};

#endif // SETTINGS_H
