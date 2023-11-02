
@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int  _darwinNotifyToken;
    int  _gibraltarMacNotifyToken;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didInstalledNewVoiceTriggerAsset;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;

@end
