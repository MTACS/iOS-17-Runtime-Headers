
@interface VTAssetMonitor : VTEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveNewAssetAvailable;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)notifyNewAssetDownloaded;

@end
