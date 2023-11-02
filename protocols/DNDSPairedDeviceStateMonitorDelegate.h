
@protocol DNDSPairedDeviceStateMonitorDelegate <NSObject>

@required

- (void)pairedDeviceStateMonitor:(DNDSPairedDeviceStateMonitor *)arg1 cloudPairingChangedFromDevices:(NSSet *)arg2 toDevices:(NSSet *)arg3;
- (void)pairedDeviceStateMonitor:(DNDSPairedDeviceStateMonitor *)arg1 pairingChangedFromDevice:(DNDSPairedDevice *)arg2 toDevice:(DNDSPairedDevice *)arg3;

@end
