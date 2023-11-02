
@interface CKDOperationInfoCache : CKDSQLiteCache {
    NSObject<OS_dispatch_queue> * _cacheDelegateQueue;
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _delegateWrappersByOperationID;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheDelegateQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cacheQueue;
@property (nonatomic, retain) NSMutableDictionary *delegateWrappersByOperationID;

+ (id)cacheDatabaseSchema;
+ (id)dbFileName;
+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_lockedArchiveCallback:(id)arg1 forOperationID:(id)arg2;
- (void)_lockedSetOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerAccountTuple:(id)arg3;
- (void)_locked_enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_locked_operationInfoForID:(id)arg1;
- (id)allOutstandingOperationIDsForAppContainerAccountTuple:(id)arg1;
- (void)archiveCallback:(id)arg1 forOperationID:(id)arg2;
- (id)cacheDelegateQueue;
- (id)cacheQueue;
- (id)delegateWrappersByOperationID;
- (void)deleteAllInfoForOperationWithID:(id)arg1;
- (void)enumerateCallbacksForOperationWithID:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)expungeOperationInfoForDeletedAccountID:(id)arg1;
- (id)initWithCacheDir:(id)arg1;
- (id)operationInfoMetadataForOperationWithID:(id)arg1;
- (id)outstandingOperationInfosForIDs:(id)arg1;
- (void)registerAttemptForOperationWithID:(id)arg1;
- (void)registerCacheEvictionActivity;
- (void)registerDelegate:(id)arg1 forOperationWithID:(id)arg2;
- (id)resumableOperationInfosByAppContainerAccountTuplesWithProgressPurged:(bool)arg1;
- (void)setCacheDelegateQueue:(id)arg1;
- (void)setCacheQueue:(id)arg1;
- (void)setDelegateWrappersByOperationID:(id)arg1;
- (void)setOperationInfo:(id)arg1 forOperationID:(id)arg2 appContainerAccountTuple:(id)arg3;
- (void)unregisterDelegate:(id)arg1 forOperationWithID:(id)arg2;

@end
