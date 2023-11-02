
@protocol CKDRecordCaching

@required

- (void)addRecord:(CKRecord *)arg1 container:(CKDContainer *)arg2 knownUserKeys:(NSSet *)arg3 scope:(long long)arg4;
- (void)clearAllRecords;
- (void)clearAllRecordsForZoneWithID:(CKRecordZoneID *)arg1;
- (void)clearAllRecordsInScope:(long long)arg1;
- (void)clearAssetAuthTokensForRecordWithID:(CKRecordID *)arg1 container:(CKDContainer *)arg2 scope:(long long)arg3;
- (unsigned long long)count:(id*)arg1;
- (void)deleteRecordWithID:(CKRecordID *)arg1 scope:(long long)arg2;
- (NSString *)etagForRecordID:(CKRecordID *)arg1 container:(CKDContainer *)arg2 requiredKeys:(NSSet *)arg3 scope:(long long)arg4;
- (unsigned long long)numberOfRecordsWithID:(CKRecordID *)arg1 container:(CKDContainer *)arg2;
- (CKRecord *)recordWithID:(CKRecordID *)arg1 container:(CKDContainer *)arg2 requiredKeys:(NSSet *)arg3 scope:(long long)arg4;
- (NSArray *)recordsWithIDs:(NSArray *)arg1 container:(CKDContainer *)arg2 requiredKeys:(NSSet *)arg3 scope:(long long)arg4;

@end
