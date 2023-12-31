
@interface CSSpeechEndpointAssetMetaUpdateMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (void)_didReceiveNewSpeechEndpointAssetMetaData;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;

@end
