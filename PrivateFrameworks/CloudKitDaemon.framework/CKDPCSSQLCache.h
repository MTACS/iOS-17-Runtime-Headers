
@interface CKDPCSSQLCache : NSObject {
    NSString * _accountID;
    NSObject<OS_dispatch_queue> * _asyncQueue;
    CKDPCSSQLCacheTableGroup * _cacheGroup;
    unsigned long long  _cacheHitCount;
    unsigned long long  _cacheRequestCount;
    CKContainerID * _containerID;
    NSString * _encryptionServiceName;
    CKDPCSSQLCacheTable * _table;
}

@property unsigned long long cacheHitCount;
@property unsigned long long cacheRequestCount;

+ (void)evictPCSSQLCachesForKnownContainers;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3;
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (unsigned long long)cacheHitCount;
- (unsigned long long)cacheRequestCount;
- (void)clearCache;
- (void)clearInvalidatedCacheEntriesWithSkipZonePCS:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)hasStatusToReport;
- (id)initWithDeviceContext:(id)arg1 containerID:(id)arg2 accountOverrideInfo:(id)arg3 accountID:(id)arg4 encryptionServiceName:(id)arg5;
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCacheHitCount:(unsigned long long)arg1;
- (void)setCacheRequestCount:(unsigned long long)arg1;
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(id /* block */)arg4;

@end
