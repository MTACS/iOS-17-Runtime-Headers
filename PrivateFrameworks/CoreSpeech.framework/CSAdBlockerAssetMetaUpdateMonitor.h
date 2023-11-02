
@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveNewAdBlockerAssetMetaData;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;

@end
