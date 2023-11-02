
@interface CSOtherAppRecordingStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingOtherAppRecordingState;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (void)handleOtherAppRecordingStateChange:(id)arg1;
- (id)init;
- (bool)isOtherNonEligibleAppRecording;

@end
