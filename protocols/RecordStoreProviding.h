
@protocol RecordStoreProviding

@required

- (NSDictionary *)batchOfRecordsToWriteWithLimit:(long long)arg1 error:(id*)arg2;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)legacyImport:(CKRecord *)arg1;
- (void)recordUpdateFailedWithID:(CKRecordID *)arg1 localGUID:(NSString *)arg2 error:(NSError *)arg3;
- (void)recordUpdateSucceededWithRecord:(CKRecord *)arg1;
- (void)resetLocalSyncStateIfAppropriate;
- (void)setSyncStatusForGUIDs:(NSArray *)arg1 toStatus:(long long)arg2;

@end
