
@interface CSUAFDownloadMonitor : CSEventMonitor {
    NSDictionary * _assetSetDict;
    UAFAssetSetObserver * _observer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;
- (void)notifyAssets:(id)arg1 onQueue:(id)arg2;

@end
