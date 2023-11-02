
@interface CSGestureMonitor : CSEventMonitor {
    unsigned long long  _dismissalTimestamp;
    unsigned long long  _wakeGestureTimestamp;
}

@property (nonatomic) unsigned long long dismissalTimestamp;
@property (nonatomic) unsigned long long wakeGestureTimestamp;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned long long)dismissalTimestamp;
- (bool)isTriggerHandheld;
- (void)setDismissalTimestamp:(unsigned long long)arg1;
- (void)setWakeGestureTimestamp:(unsigned long long)arg1;
- (unsigned long long)wakeGestureTimestamp;

@end
