
@interface IMDRecoverableMessageStore : NSObject <RecordStoreDeleting, RecordStoreProviding> {
    void metadataByRecordNameMap;
}

- (void).cxx_destruct;
- (id)batchOfRecordIDsToDeleteWithLimit:(long long)arg1 error:(id*)arg2;
- (id)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)clearTombstonesForRecordIDs:(id)arg1;
- (id)init;
- (void)legacyImport:(id)arg1;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setSyncStatusForGUIDs:(id)arg1 toStatus:(long long)arg2;

@end
