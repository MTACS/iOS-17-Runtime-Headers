
@protocol HKCloudSyncObserverClientInterface <NSObject>

@required

- (void)clientRemote_didFailToPopulateStatusWithError:(NSError *)arg1;
- (void)clientRemote_didUpdateObserverWithSyncStatus:(HKCloudSyncObserverStatus *)arg1;
- (void)clientRemote_syncDidStart;

@end
