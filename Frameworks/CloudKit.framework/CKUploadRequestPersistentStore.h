
@interface CKUploadRequestPersistentStore : NSObject {
    NSURL * _databaseURL;
    bool  _firstInvocation;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (nonatomic) bool firstInvocation;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)arg1;

- (void).cxx_destruct;
- (id)allData;
- (id)assetRepairMetadata;
- (void)clearDatabase;
- (void)clearDelayedSyncRecords;
- (void)clearRepairRecords;
- (id)currentUser;
- (id)databaseURL;
- (long long)delayedSyncCountForRecordName:(id)arg1;
- (id)delayedSyncDateForRecord:(id)arg1;
- (id)delayedSyncRecordNamesAfterDate:(id)arg1;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)arg1;
- (void)deleteDatabase;
- (void)deleteDelayedSyncForRecordName:(id)arg1;
- (void)deleteRepairRecord:(id)arg1;
- (id)earliestDelayedSyncDateAfterDate:(id)arg1;
- (bool)firstInvocation;
- (id)initWithDatabaseURL:(id)arg1;
- (id)lastFetchDate;
- (void)markRecordNameUnrecoverable:(id)arg1;
- (id)metadataForRecordName:(id)arg1;
- (id)packageRepairMetadata;
- (void)persistDelayedSyncForRecordName:(id)arg1 withDate:(id)arg2 increasingCount:(bool)arg3;
- (void)persistRepairRecord:(id)arg1;
- (void)persistSyncEngineMetadata:(id)arg1;
- (void)readDatabase:(id /* block */)arg1 async:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)readWriteDatabase:(id /* block */)arg1 async:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)setCurrentUser:(id)arg1;
- (void)setFirstInvocation:(bool)arg1;
- (void)setLastFetchDate:(id)arg1;
- (id)sortedDelayedSyncRecordsForDatabase:(id)arg1;
- (id)stateQueue;
- (id)syncEngineMetadata;
- (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id*)arg3;

@end
