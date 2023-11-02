
@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {
    unsigned long long  _lastUpdatedAssetType;
    CSTrialAssetDownloadMonitor * _monitor;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSTrialAssetDownloadMonitor *monitor;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didInstalledNewAdBlockerAsset;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(bool)arg2 assetType:(unsigned long long)arg3;

@end
