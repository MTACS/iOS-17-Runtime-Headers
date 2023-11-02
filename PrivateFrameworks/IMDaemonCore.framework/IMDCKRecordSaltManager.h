
@interface IMDCKRecordSaltManager : NSObject {
    NSString * _cachedSalt;
    NSObject<OS_dispatch_queue> * _ckQueue;
}

@property (retain) NSString *cachedSalt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_CKUtilitiesSharedInstance;
- (id)_container;
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(id /* block */)arg1;
- (void)_scheduleOperation:(id)arg1;
- (id)cachedSalt;
- (id)ckQueue;
- (void)clearLocalSyncState;
- (void)deleteDeDupeRecordZone;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)arg1;
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(id /* block */)arg1 forceFetch:(bool)arg2;
- (id)init;
- (void)setCachedSalt:(id)arg1;

@end
