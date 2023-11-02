
@protocol HMDBackingStoreDataSource

@required

- (NSString *)activeControllerKeyUsername;
- (NSOperationQueue *)backingStoreOperationQueue;
- (HMDBackingStoreOperation *)createBackingStoreLogAddTransactionOperationWithTransaction:(HMDBackingStoreTransactionBlock *)arg1;
- (HMDBackingStoreOperation *)createBackingStoreOperation;
- (HMDHomeObjectLookup *)createHomeObjectLookupWithHome:(HMDHome *)arg1;
- (NSData *)dataForPersistentStoreIncrementingGeneration:(bool)arg1 reason:(NSString *)arg2;
- (bool)isAtomicSaveFeatureEnabled;
- (HMDBackingStoreLocal *)localBackingStore;

@end
