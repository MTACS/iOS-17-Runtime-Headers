
@interface AXPhoenixWakeGestureMonitor : AXPhoenixEventMonitor <CMWakeGestureDelegate> {
    double  _dismissalTimestamp;
    CMWakeGestureManager * _gestureManager;
    double  _wakeGestureTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double dismissalTimestamp;
@property (nonatomic, retain) CMWakeGestureManager *gestureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double wakeGestureTimestamp;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didReceiveSleepGesture;
- (void)_didReceiveWakeGesture;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (double)dismissalTimestamp;
- (id)gestureManager;
- (id)init;
- (bool)isDeviceHandheld;
- (void)setDismissalTimestamp:(double)arg1;
- (void)setGestureManager:(id)arg1;
- (void)setWakeGestureTimestamp:(double)arg1;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (double)wakeGestureTimestamp;

@end
