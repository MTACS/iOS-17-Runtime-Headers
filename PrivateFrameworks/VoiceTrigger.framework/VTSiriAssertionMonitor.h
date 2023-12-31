
@interface VTSiriAssertionMonitor : VTEventMonitor {
    unsigned char  _assertionState;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(bool)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;
- (id)init;
- (bool)isEnabled;

@end
