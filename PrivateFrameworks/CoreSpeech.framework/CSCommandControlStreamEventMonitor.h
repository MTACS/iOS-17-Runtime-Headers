
@interface CSCommandControlStreamEventMonitor : CSEventMonitor <CSCommandControlBehaviorMonitorDelegate> {
    bool  _isCommandControlStreaming;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)_notifyStopCommandControl;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(bool)arg3 option:(id)arg4;
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (id)init;
- (bool)isStreaming;

@end
