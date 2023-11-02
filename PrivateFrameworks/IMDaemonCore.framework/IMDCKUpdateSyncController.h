
@interface IMDCKUpdateSyncController : IMDCKAbstractSyncController {
    NSObject<OS_dispatch_queue> * _ckQueue;
    bool  _fetchedChatsDuringLastSync;
    CKServerChangeToken * _latestSyncToken;
    IMDRecordZoneManager * _recordZoneManager;
    <SyncTokenStoreProviding> * _syncTokenStore;
    NSMutableDictionary * _writeMsgIDToRowIDMap;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ckQueue;
@property (nonatomic) bool fetchedChatsDuringLastSync;
@property (nonatomic, retain) CKServerChangeToken *latestSyncToken;
@property (nonatomic, retain) IMDRecordZoneManager *recordZoneManager;
@property (nonatomic, retain) <SyncTokenStoreProviding> *syncTokenStore;
@property (nonatomic, retain) NSMutableDictionary *writeMsgIDToRowIDMap;

+ (id)_fetchUpdatesCKConfiguration:(id)arg1;
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
+ (id)fetchOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 activity:(id)arg4;
+ (id)messageUpdateV1RecordType;
+ (id)sharedInstance;
+ (long long)stepAfter:(long long)arg1;

- (void).cxx_destruct;
- (id)_fetchRecordsOperationWithActivity:(id)arg1;
- (unsigned long long)_numberOfRecordsToFetchPerBatch;
- (void)_onChangeTokenUpdated:(id)arg1 token:(id)arg2 data:(id)arg3;
- (void)_onReadComplete:(long long)arg1 error:(id)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (void)_onRecordDeleted:(id)arg1 type:(id)arg2;
- (void)_onRecordRead:(id)arg1;
- (void)_onRecordT1Write:(id)arg1 error:(id)arg2 recordNameToRowIDMap:(id)arg3;
- (void)_onRecordT2Write:(id)arg1 error:(id)arg2 recordNameToItemMap:(id)arg3;
- (void)_onRecordZoneFetchComplete:(id)arg1 token:(id)arg2 tokenData:(id)arg3 moreComing:(bool)arg4 error:(id)arg5;
- (void)_onWriteT1Complete:(long long)arg1 error:(id)arg2 shouldWriteMore:(bool)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)_onWriteT2Complete:(long long)arg1 error:(id)arg2 shouldWriteMore:(bool)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)_readRecordsWithType:(long long)arg1 attemptCount:(unsigned long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (id)_saveRecordsT1OperationWithMap:(id)arg1 activity:(id)arg2;
- (id)_saveRecordsT2OperationWithMap:(id)arg1 activity:(id)arg2;
- (void)_scheduleOperation:(id)arg1;
- (id)_syncTokenKey;
- (id)_syncTokenStore;
- (void)_writeRecordsWithType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (void)_writeT1RecordUpdatesWithType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (void)_writeT2RecordUpdatesWithType:(long long)arg1 activity:(id)arg2 completion:(id /* block */)arg3;
- (id)_writeUpdatesCKConfiguration:(id)arg1;
- (void)_writeUpdatesWithType:(long long)arg1 updateStep:(long long)arg2 activity:(id)arg3 completion:(id /* block */)arg4;
- (bool)_zoneCreated;
- (id)ckQueue;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)deleteUpdateSyncToken;
- (void)deleteUpdateZone;
- (bool)fetchedChatsDuringLastSync;
- (id)init;
- (id)initWithSyncTokenStore:(id)arg1;
- (id)latestSyncToken;
- (id)recordZoneManager;
- (id)saveT1UpdatesOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 recordNameToRowIDMap:(id)arg4 activity:(id)arg5;
- (id)saveT2UpdatesOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 recordNameToRowIDMap:(id)arg4 activity:(id)arg5;
- (void)setCkQueue:(id)arg1;
- (void)setFetchedChatsDuringLastSync:(bool)arg1;
- (void)setLatestSyncToken:(id)arg1;
- (void)setRecordZoneManager:(id)arg1;
- (void)setSyncTokenStore:(id)arg1;
- (void)setWriteMsgIDToRowIDMap:(id)arg1;
- (id)syncTokenStore;
- (void)syncWithType:(long long)arg1 withActivity:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)writeMsgIDToRowIDMap;

@end
