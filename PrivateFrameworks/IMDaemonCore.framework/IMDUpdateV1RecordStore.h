
@interface IMDUpdateV1RecordStore : NSObject <RecordStoreProviding> {
    NSMutableDictionary * _recordNameToRowIDMap;
}

@property (nonatomic, retain) NSMutableDictionary *recordNameToRowIDMap;

- (void).cxx_destruct;
- (id)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)legacyImport:(id)arg1;
- (id)recordNameToRowIDMap;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setRecordNameToRowIDMap:(id)arg1;
- (void)setSyncStatusForGUIDs:(id)arg1 toStatus:(long long)arg2;

@end
