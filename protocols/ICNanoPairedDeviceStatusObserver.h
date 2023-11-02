
@protocol ICNanoPairedDeviceStatusObserver <NSObject>

@optional

- (void)nanoPairedDeviceStatusMonitor:(ICNanoPairedDeviceStatusMonitor *)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)nanoPairedDeviceStatusMonitor:(ICNanoPairedDeviceStatusMonitor *)arg1 didFinishInitialSyncForPairingIdentifier:(NSUUID *)arg2;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(ICNanoPairedDeviceStatusMonitor *)arg1;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(ICNanoPairedDeviceStatusMonitor *)arg1;

@end
