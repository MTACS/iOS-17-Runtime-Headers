
@interface CSHangUpEnabledMonitor : CSEventMonitor {
    bool  _isEnabled;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_checkCanUseVoiceTriggerDuringCallEnabled;
- (void)_didReceiveCanUseVoiceTriggerDuringCallSettingChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (void)_voiceTriggerDuringCallEnabledDidChange;
- (id)init;
- (bool)isEnabled;

@end
