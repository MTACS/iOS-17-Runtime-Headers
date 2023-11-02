
@protocol DNDSSyncEngineDataSource <NSObject>

@required

- (void)purgeRecordsForSyncEngine:(DNDSSyncEngine *)arg1;
- (NSArray *)recordIDsForSyncEngine:(DNDSSyncEngine *)arg1;
- (void)syncEngine:(DNDSSyncEngine *)arg1 didFetchRecord:(CKRecord *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 failedToDeleteRecordWithID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (long long)syncEngine:(DNDSSyncEngine *)arg1 prepareRecordToSave:(inout CKRecord *)arg2;
- (NSString *)syncEngine:(DNDSSyncEngine *)arg1 recordTypeForRecordID:(CKRecordID *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 resolveConflictBetweenClientRecord:(CKRecord *)arg2 andServerRecord:(CKRecord *)arg3;
- (long long)syncEngine:(DNDSSyncEngine *)arg1 wantsRecord:(CKRecord *)arg2;
- (void)syncEngine:(DNDSSyncEngine *)arg1 zoneWithIDWasDeleted:(CKRecordZoneID *)arg2 removingRecordIDs:(NSArray *)arg3;

@end
