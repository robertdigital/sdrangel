/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef _SWG_SWGDeviceSetApi_H_
#define _SWG_SWGDeviceSetApi_H_

#include "SWGHttpRequest.h"

#include "SWGChannelReport.h"
#include "SWGChannelSettings.h"
#include "SWGChannelsDetail.h"
#include "SWGDeviceListItem.h"
#include "SWGDeviceSet.h"
#include "SWGDeviceSettings.h"
#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"
#include "SWGSuccessResponse.h"

#include <QObject>

namespace SWGSDRangel {

class SWGDeviceSetApi: public QObject {
    Q_OBJECT

public:
    SWGDeviceSetApi();
    SWGDeviceSetApi(QString host, QString basePath);
    ~SWGDeviceSetApi();

    QString host;
    QString basePath;
    QMap<QString, QString> defaultHeaders;

    void devicesetChannelDelete(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelPost(qint32 device_set_index, SWGChannelSettings& body);
    void devicesetChannelReportGet(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelSettingsGet(qint32 device_set_index, qint32 channel_index);
    void devicesetChannelSettingsPatch(qint32 device_set_index, qint32 channel_index, SWGChannelSettings& body);
    void devicesetChannelSettingsPut(qint32 device_set_index, qint32 channel_index, SWGChannelSettings& body);
    void devicesetChannelsReportGet(qint32 device_set_index);
    void devicesetDevicePut(qint32 device_set_index, SWGDeviceListItem& body);
    void devicesetDeviceRunDelete(qint32 device_set_index);
    void devicesetDeviceRunGet(qint32 device_set_index);
    void devicesetDeviceRunPost(qint32 device_set_index);
    void devicesetDeviceSettingsGet(qint32 device_set_index);
    void devicesetDeviceSettingsPatch(qint32 device_set_index, SWGDeviceSettings& body);
    void devicesetDeviceSettingsPut(qint32 device_set_index, SWGDeviceSettings& body);
    void devicesetFocusPatch(qint32 device_set_index);
    void devicesetGet(qint32 device_set_index);
    void instanceDeviceSetDelete();
    void instanceDeviceSetPost(qint32 tx);
    
private:
    void devicesetChannelDeleteCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelPostCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelReportGetCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelSettingsGetCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelSettingsPatchCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelSettingsPutCallback (SWGHttpRequestWorker * worker);
    void devicesetChannelsReportGetCallback (SWGHttpRequestWorker * worker);
    void devicesetDevicePutCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceRunDeleteCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceRunGetCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceRunPostCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceSettingsGetCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceSettingsPatchCallback (SWGHttpRequestWorker * worker);
    void devicesetDeviceSettingsPutCallback (SWGHttpRequestWorker * worker);
    void devicesetFocusPatchCallback (SWGHttpRequestWorker * worker);
    void devicesetGetCallback (SWGHttpRequestWorker * worker);
    void instanceDeviceSetDeleteCallback (SWGHttpRequestWorker * worker);
    void instanceDeviceSetPostCallback (SWGHttpRequestWorker * worker);
    
signals:
    void devicesetChannelDeleteSignal(SWGChannelSettings* summary);
    void devicesetChannelPostSignal(SWGSuccessResponse* summary);
    void devicesetChannelReportGetSignal(SWGChannelReport* summary);
    void devicesetChannelSettingsGetSignal(SWGChannelSettings* summary);
    void devicesetChannelSettingsPatchSignal(SWGChannelSettings* summary);
    void devicesetChannelSettingsPutSignal(SWGChannelSettings* summary);
    void devicesetChannelsReportGetSignal(SWGChannelsDetail* summary);
    void devicesetDevicePutSignal(SWGDeviceListItem* summary);
    void devicesetDeviceRunDeleteSignal(SWGDeviceState* summary);
    void devicesetDeviceRunGetSignal(SWGDeviceState* summary);
    void devicesetDeviceRunPostSignal(SWGDeviceState* summary);
    void devicesetDeviceSettingsGetSignal(SWGDeviceSettings* summary);
    void devicesetDeviceSettingsPatchSignal(SWGDeviceSettings* summary);
    void devicesetDeviceSettingsPutSignal(SWGDeviceSettings* summary);
    void devicesetFocusPatchSignal(SWGSuccessResponse* summary);
    void devicesetGetSignal(SWGDeviceSet* summary);
    void instanceDeviceSetDeleteSignal(SWGSuccessResponse* summary);
    void instanceDeviceSetPostSignal(SWGSuccessResponse* summary);
    
    void devicesetChannelDeleteSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelPostSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelReportGetSignalE(SWGChannelReport* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsGetSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPatchSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPutSignalE(SWGChannelSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelsReportGetSignalE(SWGChannelsDetail* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDevicePutSignalE(SWGDeviceListItem* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunDeleteSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunGetSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunPostSignalE(SWGDeviceState* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsGetSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPatchSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPutSignalE(SWGDeviceSettings* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetFocusPatchSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetGetSignalE(SWGDeviceSet* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetDeleteSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetPostSignalE(SWGSuccessResponse* summary, QNetworkReply::NetworkError error_type, QString& error_str);
    
    void devicesetChannelDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelReportGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelSettingsPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetChannelsReportGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDevicePutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceRunPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetDeviceSettingsPutSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetFocusPatchSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void devicesetGetSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetDeleteSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    void instanceDeviceSetPostSignalEFull(SWGHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString& error_str);
    
};

}
#endif
