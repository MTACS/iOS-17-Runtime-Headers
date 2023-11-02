
@interface IMDUpdateV2RecordStore : NSObject <RecordStoreProviding> {
    NSMutableDictionary * _recordNameToMessageItemMap;
}

@property (nonatomic, retain) NSMutableDictionary *recordNameToMessageItemMap;

- (void).cxx_destruct;
- (id)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)legacyImport:(id)arg1;
- (id)recordNameToMessageItemMap;
- (void)recordUpdateFailedWithID:(id)arg1 localGUID:(id)arg2 error:(id)arg3;
- (void)recordUpdateSucceededWithRecord:(id)arg1;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setRecordNameToMessageItemMap:(id)arg1;
- (void)setSyncStatusForGUIDs:(id)arg1 toStatus:(long long)arg2;

@end
