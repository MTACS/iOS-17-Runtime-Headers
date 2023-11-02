
@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)arg1;
- (void)updateSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg2;

@end
