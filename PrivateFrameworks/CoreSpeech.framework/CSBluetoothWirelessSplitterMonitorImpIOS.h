
@interface CSBluetoothWirelessSplitterMonitorImpIOS : CSBluetoothWirelessSplitterMonitor {
    int  _notifyToken;
    unsigned long long  _splitterState;
}

- (void)_didReceiveWirelessSplitterStateChange;
- (void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg3;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_stopMonitoring;
- (id)init;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)arg1;
- (void)updateSplitterState:(unsigned long long)arg1 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg2;

@end
