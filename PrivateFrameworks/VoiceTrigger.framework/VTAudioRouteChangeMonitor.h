
@interface VTAudioRouteChangeMonitor : VTEventMonitor {
    unsigned long long  _hearstConnection;
}

+ (id)sharedInstance;

- (id)_CMSessionDispatchQueue;
- (bool)_hasDoAPSupport:(struct __CFDictionary { }*)arg1;
- (bool)_hasInEarDetectSupport:(struct __CFDictionary { }*)arg1;
- (bool)_isActiveRoute:(struct __CFDictionary { }*)arg1;
- (void)_notifyObserver:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned long long)_updateHearstConnectionStatus;
- (unsigned long long)hearstConnectionStatus;
- (id)init;
- (void)updateExternalRouteConnectionStatus;

@end
