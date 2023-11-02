
@protocol HMDResidentSyncServerDataSource <NSObject>

@required

- (long long)maximumTransactionsForSparseUpdate;
- (long long)maximumTransactionsForStoreChange;

@end
