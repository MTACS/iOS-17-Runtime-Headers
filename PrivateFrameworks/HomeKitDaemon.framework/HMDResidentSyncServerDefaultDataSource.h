
@interface HMDResidentSyncServerDefaultDataSource : NSObject <HMDResidentSyncServerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long maximumTransactionsForSparseUpdate;
@property (readonly) long long maximumTransactionsForStoreChange;
@property (readonly) Class superclass;

- (long long)maximumTransactionsForSparseUpdate;
- (long long)maximumTransactionsForStoreChange;

@end
