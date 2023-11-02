
@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore> {
    NSOperationQueue * _cloudKitOperationQueue;
    WBSCloudHistoryConfiguration * _configuration;
    CKDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    CKRecordZone * _recordZone;
    CKRecordZoneID * _recordZoneID;
    bool  _useManateeContainer;
}

@property (nonatomic, readonly) bool useManateeContainer;

- (void).cxx_destruct;
- (void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(bool)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_configureFetchChangesOperation:(id)arg1;
- (void)_fetchAllRecordsWithQueryOperation:(id)arg1 enumerationBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)arg2 result:(id)arg3 completion:(id /* block */)arg4;
- (void)_prepareRecordZoneWithCompletion:(id /* block */)arg1;
- (id)_prepareRecordZoneWithoutCachingWithError:(id*)arg1;
- (id)_recordDataForDictionary:(id)arg1;
- (id)_recordWithCloudHistoryVisits:(id)arg1 profileServerIdentifier:(id)arg2;
- (id)_recordWithHistoryTombstones:(id)arg1 version:(unsigned long long)arg2;
- (id)_recordWithType:(id)arg1 version:(unsigned long long)arg2 dataDictionary:(id)arg3;
- (id)_recordsWithCloudHistoryVisits:(id)arg1;
- (void)_resetRecordZone;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_saveRecords:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_scheduleOperation:(id)arg1;
- (bool)_shouldTryToResetRecordZoneForError:(id)arg1;
- (void)deleteHistoryZoneWithCompletion:(id /* block */)arg1;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* block */)arg1;
- (void)fetchRecordsForProfileServerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConfiguration:(id)arg1 useManateeContainer:(bool)arg2;
- (void)initializePushNotifications:(id /* block */)arg1;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* block */)arg3 completion:(id /* block */)arg4;
- (bool)useManateeContainer;

@end
