
@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary * _trialClientDict;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_handleSiriAttAssetTrailDownloadForNamespace:(id)arg1;
- (void)_notifyTrialAssetDownloadForAssetType:(unsigned long long)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)_trailStageDirectoryForAsset:(id)arg1;
- (bool)_validateDownloadedAssetForAssetType:(unsigned long long)arg1;
- (void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)arg1 onQueue:(id)arg2;
- (id)init;

@end
