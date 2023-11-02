
@interface CSClamshellStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_didReceiveClamshellStateChangeNotification:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withClamshellState:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isClamshellClosed;

@end
