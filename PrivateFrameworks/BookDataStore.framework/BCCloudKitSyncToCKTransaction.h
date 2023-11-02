
@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction {
    <BCCloudDataSyncProvider> * _syncManager;
}

@property (nonatomic, retain) <BCCloudDataSyncProvider> *syncManager;

+ (id)transactionNameForEntityName:(id)arg1;

- (void).cxx_destruct;
- (double)coalescingDelay;
- (id)initWithEntityName:(id)arg1 syncManager:(id)arg2 delegate:(id)arg3;
- (void)performWorkWithCompletion:(id /* block */)arg1;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (double)transactionLifetimeTimout;

@end
