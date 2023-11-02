
@interface IMDCKRecoverableMessageSyncController : IMDCKAbstractSyncController {
    IMDCKMessageSyncCKOperationFactory * _CKOperationFactory;
    NSObject<OS_dispatch_queue> * _ckQueue;
    CKServerChangeToken * _latestSyncToken;
    IMDRecordZoneManager * _recordZoneManager;
    <SyncTokenStoreProviding> * _syncTokenStore;
}

@property (nonatomic, retain) IMDCKMessageSyncCKOperationFactory *CKOperationFactory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <SyncTokenStoreProviding> *syncTokenStore;

+ (id)_fetchOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 activity:(id)arg4;
+ (id)_fetchRecoverableMessagesCKConfiguration:(id)arg1;
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CKOperationFactory;
- (id)_constructRecoverableMessageRecordIDUsingTombStoneDictionary:(id)arg1;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (unsigned long long)_deleteBatchSize;
- (void)_deleteRecoverableMessagesWithRecordIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)_fetchRecordsOperationWithActivity:(id)arg1;
- (void)_onChangeTokenUpdated:(id)arg1 token:(id)arg2 data:(id)arg3;
- (void)_onReadComplete:(long long)arg1 error:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)_onRecordDeleted:(id)arg1 type:(id)arg2;
- (void)_onRecordRead:(id)arg1;
- (void)_onRecordWrite:(id)arg1 error:(id)arg2 recordNameToPartIndexAndRowID:(id)arg3;
- (void)_onRecordZoneFetchComplete:(id)arg1 token:(id)arg2 tokenData:(id)arg3 moreComing:(bool)arg4 error:(id)arg5;
- (void)_onRecoverableMessagePartRecordReadWithDeleteDate:(id)arg1 messageGUID:(id)arg2 partBody:(id)arg3;
- (void)_onWriteComplete:(long long)arg1 error:(id)arg2 shouldWriteMore:(bool)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)_processRecordDeletionCompletion:(id)arg1 error:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_readRecordsWithType:(long long)arg1 attemptCount:(unsigned long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (id)_saveRecordsOperationWithMap:(id)arg1 activity:(id)arg2;
- (id)_saveRecoverableMessagesOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 recordNameToPartIndexAndRowID:(id)arg4 activity:(id)arg5;
- (void)_scheduleOperation:(id)arg1;
- (id)_syncTokenKey;
- (id)_syncTokenStore;
- (void)_writeRecordsWithType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (id)_writeRecoverableMessagesCKConfiguration:(id)arg1;
- (bool)_zoneCreated;
- (id)ckQueue;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (id)createCKRecordforRecoverableMessageMetadata:(id)arg1 zoneID:(id)arg2 recordNameToPartIndexAndRowID:(id)arg3;
- (void)deleteRecoverableMessageZone;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)recordZoneManager;
- (id)recoverableGUIDFromMessageGUID:(id)arg1 chatGUID:(id)arg2 partIndex:(long long)arg3;
- (void)setCKOperationFactory:(id)arg1;
- (void)setCkQueue:(id)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (long long)syncControllerRecordType;
- (void)syncRemovedRecoverableMessagesToCloudKitWithCompletion:(id /* block */)arg1;
- (id)syncTokenStore;
- (void)syncWithType:(long long)arg1 withActivity:(id)arg2 withCompletion:(id /* block */)arg3;

@end
