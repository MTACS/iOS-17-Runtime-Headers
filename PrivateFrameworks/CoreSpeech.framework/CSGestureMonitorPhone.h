
@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate> {
    CMWakeGestureManager * _gestureManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didReceiveSleepGesture;
- (void)_didReceiveWakeGesture;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;

@end
