
@protocol HDNanoSyncManagerObserver <NSObject>

@required

- (void)nanoSyncManager:(HDNanoSyncManager *)arg1 pairedDevicesChanged:(HKNanoSyncPairedDevicesSnapshot *)arg2;

@end
