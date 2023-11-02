
@interface CSSpeakerRecognitionAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate> {
    unsigned long long  _lastUpdatedAssetType;
    int  _notifyToken;
    CSTrialAssetDownloadMonitor * _trialAssetMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSTrialAssetDownloadMonitor *trialAssetMonitor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didInstalledNewAsset;
- (const char *)_notificationKey;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)setTrialAssetMonitor:(id)arg1;
- (void)trialAssetDownloadMonitorDelegate:(id)arg1 didInstallNewAsset:(bool)arg2 assetType:(unsigned long long)arg3;
- (id)trialAssetMonitor;

@end
