
@interface ATDevicePairedSyncManager : NSObject <ATMessageLinkObserver, ATSessionObserver, ICNanoPairedDeviceStatusObserver> {
    ATDeviceService * _deviceService;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedPairedSyncManager;

- (void).cxx_destruct;
- (void)_cleanupSyncState;
- (void)_setInstallDateIfNeededForBundleID:(id)arg1;
- (void)_triggerInitialSync;
- (bool)hasRestriction;
- (id)init;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1;
- (void)start;
- (void)stop;

@end
