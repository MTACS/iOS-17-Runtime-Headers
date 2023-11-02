
@interface CSLanguageCodeUpdateMonitorImplDarwin : CSLanguageCodeUpdateMonitor {
    NSString * _currentLanguageCode;
}

- (void).cxx_destruct;
- (void)_didReceiveLanguageCodeUpdate:(id)arg1;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isLanguageCodeCurrent:(id)arg1;
- (void)notifySiriLanguageCodeChanged:(id)arg1;

@end
