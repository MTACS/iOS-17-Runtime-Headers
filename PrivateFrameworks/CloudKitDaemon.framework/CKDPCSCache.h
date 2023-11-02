
@interface CKDPCSCache : NSObject {
    NSString * _accountID;
    CKAccountOverrideInfo * _accountOverrideInfo;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainerID * _containerID;
    NSString * _encryptionServiceName;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    NSMutableDictionary * _outstandingFetches;
    CKDPCSMemoryCache * _recordMemoryCache;
    CKDPCSMemoryCache * _shareMemoryCache;
    CKDPCSSQLCache * _sqlCache;
    CKDPCSMemoryCache * _zoneMemoryCache;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) CKAccountOverrideInfo *accountOverrideInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) NSString *encryptionServiceName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *fetchQueue;
@property (nonatomic, retain) NSMutableDictionary *outstandingFetches;
@property (nonatomic, readonly) CKDPCSMemoryCache *recordMemoryCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *shareMemoryCache;
@property (nonatomic, readonly) CKDPCSSQLCache *sqlCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *zoneMemoryCache;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(id /* block */)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(id /* block */)arg5 withCompletionHandler:(id /* block */)arg6;
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;
- (void)_lockedGetSQLCacheWithCompletionHandler:(id /* block */)arg1;
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(id /* block */)arg5 withCompletionHandler:(id /* block */)arg6;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (id)accountID;
- (id)accountOverrideInfo;
- (id)callbackQueue;
- (void)clearInvalidatedPCSSQLCacheEntriesWithSkipZonePCS:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPCSCaches;
- (void)clearPCSMemoryCaches;
- (id)containerID;
- (void)dealloc;
- (id)encryptionServiceName;
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)fetchQueue;
- (void)getSQLCache:(id /* block */)arg1;
- (bool)hasStatusToReport;
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;
- (id)outstandingFetches;
- (id)recordMemoryCache;
- (void)removePCSDataForItemsInShareWithID:(id)arg1;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;
- (void)runMemoryCacheEviction;
- (void)setCallbackQueue:(id)arg1;
- (void)setFetchQueue:(id)arg1;
- (void)setOutstandingFetches:(id)arg1;
- (id)shareMemoryCache;
- (id)sqlCache;
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)zoneMemoryCache;

@end
