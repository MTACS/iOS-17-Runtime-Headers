
@interface AudioAnalyticsBase.BluetoothUtility : _TtCs12_SwiftObject {
    void $__lazy_storage_$_bluetoothManager;
    void bluetoothQueue;
    void isRegisteredForNotifications;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void subscribers;
}

- (void)handleBluetoothManagerStateChangeWithNotification:(id)arg1;

@end
