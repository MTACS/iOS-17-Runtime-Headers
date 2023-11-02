
@interface CSMXSessionMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)arg1;
- (void)_querySomeClientIsActive;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingAVSystemControllerLifecycle;
- (void)_startObservingSomeClientIsActive;
- (void)_stopMonitoring;
- (void)_systemControllerDied:(id)arg1;
- (id)init;

@end
