
@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate> {
    unsigned char  _assertionState;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_notifyObserver:(bool)arg1;
- (void)_notifyObserverBacklightOn:(bool)arg1 atHostTime:(unsigned long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)backlightOnAssertionReceived:(bool)arg1 atHostTime:(unsigned long long)arg2;
- (void)dealloc;
- (void)disableAssertionReceived;
- (void)enableAssertionReceived;
- (id)init;
- (bool)isEnabled;

@end
