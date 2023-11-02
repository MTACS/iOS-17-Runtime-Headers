
@protocol CSBluetoothWirelessSplitterMonitorDelegate <NSObject>

@required

- (void)CSBluetoothWirelessSplitterMonitor:(CSBluetoothWirelessSplitterMonitor *)arg1 didReceiveSplitterStateChange:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(bool)arg3;

@end
