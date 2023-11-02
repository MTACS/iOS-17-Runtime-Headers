
@interface CSSpeakerRecognitionAssetMetaUpdateMonitor : CSEventMonitor {
    int  _notifyToken;
}

+ (id)sharedInstance;

- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveSpeakerRecognitionAssetMetaData;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;

@end
