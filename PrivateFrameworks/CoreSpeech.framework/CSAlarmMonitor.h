
@interface CSAlarmMonitor : CSEventMonitor {
    long long  _alarmFiringState;
    MTAlarmManager * _alarmManager;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_alarmDismissed:(id)arg1;
- (void)_alarmIsFiring:(id)arg1;
- (void)_alarmStateReset:(id)arg1;
- (void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (long long)alarmState;
- (id)init;
- (void)initializeAlarmState;

@end
