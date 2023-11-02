
@interface BRCPendingChangesStream : NSObject {
    BRCClientZone * _clientZone;
    NSURL * _databaseURL;
    bool  _dbHasOpened;
    BRCSafeDBHolder * _dbSafeHolder;
    NSError * _error;
    bool  _hasBeenCreated;
    NSString * _label;
    BRCServerZone * _serverZone;
    CKServerChangeToken * _startingChangeToken;
}

- (void).cxx_destruct;
- (void)_closeChangeStream;
- (void)_createSchemaIfNecessary;
- (void)_dbBecameCorrupted:(id)arg1 withDescription:(id)arg2;
- (bool)_dropExistingTablesWithDB:(id)arg1;
- (bool)_finishedFetchingRecordMetadata:(id)arg1 withDB:(id)arg2;
- (id)_getChangesStreamSafeDBHolder;
- (id)_initDeltaSyncWithChangeToken:(id)arg1 serverZone:(id)arg2;
- (void)_openDB;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(bool)arg2 isDelete:(bool)arg3;
- (bool)_saveSubResourceRecord:(id)arg1 withDB:(id)arg2;
- (void)_wasClosed;
- (long long)copyBlockingSaveRecordsToNeedingFetchIgnoringRecords:(id)arg1;
- (void)destroyDatabase;
- (bool)dumpTablesToContext:(id)arg1 includeAllItems:(bool)arg2 error:(id*)arg3;
- (bool)enumerateRecordsNeedingMetadataFetchWithBlock:(id /* block */)arg1;
- (bool)enumerateRecordsNeedingXattrFetchWithBlock:(id /* block */)arg1;
- (bool)enumerateRecordsOfType:(long long)arg1 block:(id /* block */)arg2;
- (void)fetchQueryCursor:(id /* block */)arg1;
- (void)fetchTokenState:(id /* block */)arg1;
- (void)finishedFetchingXattrSignatures:(id)arg1;
- (bool)hasBeenCreated;
- (bool)hasFetchRecordByID:(id)arg1;
- (bool)hasRecordDeletes;
- (bool)hasRecordIDBlockedOnSubResources:(id)arg1;
- (bool)hasRecordIDsToDeserialize;
- (bool)hasSubResourceRecords;
- (bool)hasXattrsToFetch;
- (id)initForListingWithParent:(id)arg1 serverZone:(id)arg2;
- (id)initWithServerZone:(id)arg1;
- (id)lastError;
- (bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 subResourceEditedRecords:(id)arg4 serverChangeToken:(id)arg5 clientChangeToken:(long long)arg6;
- (bool)saveEditedRecords:(id)arg1 subResourceEditedRecords:(id)arg2 queryCursor:(id)arg3;
- (bool)saveSubResourceRecords:(id)arg1 afterSavingMainTableItems:(id)arg2 queryCursor:(id)arg3;
- (bool)unblockRecord:(id)arg1 waitingOnRecord:(id)arg2;
- (void)unblockRecordSavesWaitingOnRecordID:(id)arg1;

@end
