
@interface _SYDeviceMonitor : NSObject {
    NSUUID * _currentTargetDeviceUUID;
    NSMutableSet * _devices;
    NSObject<OS_dispatch_queue> * _syncQ;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearDeviceList;
- (void)_deviceDidBecomeActive:(id)arg1;
- (void)_deviceDidBecomeInactive:(id)arg1;
- (void)_rebuildDeviceList;
- (void)addNRDevice:(id)arg1;
- (id)allDevices;
- (id)currentTargetableDevice;
- (void)deviceBecameTargetable:(id)arg1;
- (id)deviceForNRDevice:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (id)init;
- (void)removeNRDevice:(id)arg1;

@end
