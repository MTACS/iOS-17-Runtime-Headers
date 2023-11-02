
@protocol HKSummarySharingEntryStoreClientInterface <NSObject>

@required

- (void)clientRemote_reachabilityStatusDidUpdate:(NSDictionary *)arg1 error:(NSError *)arg2;
- (void)clientRemote_sharingEntriesDidUpdate:(NSArray *)arg1;

@end
