
@protocol FCPrivateRecordSyncManagerDelegate <NSObject>

@required

- (void)recordSyncManager:(FCPrivateRecordSyncManager *)arg1 stateDidChange:(NTPBPrivateRecordSyncState *)arg2;
- (void)recordSyncManagerNotifyObservers:(FCPrivateRecordSyncManager *)arg1;

@end
