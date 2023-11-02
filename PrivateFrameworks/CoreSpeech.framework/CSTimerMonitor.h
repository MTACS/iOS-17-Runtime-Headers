
@interface CSTimerMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> * _queue;
    long long  _timerFiringState;
    MTTimerManager * _timerManager;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_isSleepTimer:(id)arg1;
- (void)_notifyObserver:(id)arg1 timerIsFiringState:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)_timerDismissed:(id)arg1;
- (void)_timerIsFiring:(id)arg1;
- (void)_timerStateReset:(id)arg1;
- (id)init;
- (void)initializeTimerState;
- (long long)timerState;

@end
