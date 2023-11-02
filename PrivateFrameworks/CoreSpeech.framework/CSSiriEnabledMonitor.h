
@interface CSSiriEnabledMonitor : CSEventMonitor {
    bool  _isSiriEnabled;
}

+ (id)sharedInstance;

- (void)_didReceiveSiriSettingChanged:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)fetchIsEnabled;
- (id)init;
- (bool)isEnabled;

@end
