
@protocol PSYSyncStateObserverInterface <NSObject>

@required

- (oneway void)didUpdateSyncForPairingID:(NSUUID *)arg1;

@end
