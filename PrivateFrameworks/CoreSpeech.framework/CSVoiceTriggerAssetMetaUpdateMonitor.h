
@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor {
    int  _darwinNotifyToken;
    int  _gibraltarMacNotifyToken;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveNewVoiceTriggerAssetMetaData;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)notifyNewVoiceTriggerAssetMetaDataUpdated;

@end
