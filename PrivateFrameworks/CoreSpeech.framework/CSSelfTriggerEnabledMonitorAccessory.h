
@interface CSSelfTriggerEnabledMonitorAccessory : CSEventMonitor {
    bool  _enabled;
}

@property (nonatomic) bool enabled;

+ (id)sharedInstance;

- (void)_didReceiveSelfTriggerChanged:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (bool)enabled;
- (id)init;
- (bool)isEnabled;
- (void)setEnable:(bool)arg1;
- (void)setEnabled:(bool)arg1;

@end
