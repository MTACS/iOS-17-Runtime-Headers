
@interface CSLanguageCodeUpdateMonitorImpl : CSLanguageCodeUpdateMonitor {
    int  _notifyToken;
}

- (void)_didReceiveLanguageCodeUpdate;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (bool)isLanguageCodeCurrent:(id)arg1;
- (void)notifySiriLanguageCodeChanged:(id)arg1;

@end
