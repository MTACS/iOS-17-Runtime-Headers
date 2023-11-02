
@protocol BBSyncServiceInterface <NSObject>

@required

- (<BBSyncServiceDelegate> *)delegate;
- (void)enqueueSyncedRemovalForBulletin:(BBBulletin *)arg1 feeds:(unsigned long long)arg2;
- (unsigned long long)pairedDeviceCount;
- (void)setDelegate:(id <BBSyncServiceDelegate>)arg1;

@end
