
@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor {
    bool  _isPhraseSpotterEnabled;
    int  _notifyToken;
}

+ (id)sharedInstance;

- (bool)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(bool)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(bool)arg2;
- (void)_phraseSpotterEnabledDidChange;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isEnabled;

@end
