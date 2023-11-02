
@protocol CKSyncEngineDataSource <NSObject>

@required

- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordWithID:(CKRecordID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didFetchRecord:(CKRecord *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecord:(CKRecord *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didUpdateMetadata:(NSData *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordWithID:(CKRecordID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecord:(CKRecord *)arg2 error:(NSError *)arg3;
- (CKRecord *)syncEngine:(CKSyncEngine *)arg1 recordToSaveForRecordID:(CKRecordID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 recordWithIDWasDeleted:(CKRecordID *)arg2 recordType:(NSString *)arg3;

@optional

- (NSArray *)recordZoneIDsToDeleteForSyncEngine:(CKSyncEngine *)arg1;
- (NSArray *)recordZonesToSaveForSyncEngine:(CKSyncEngine *)arg1;
- (void)syncEngine:(CKSyncEngine *)arg1 accountChangedFromUserRecordID:(CKRecordID *)arg2 toUserRecordID:(CKRecordID *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didCompleteModifyRecordsBatch:(CKSyncEngineBatch *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 didDeleteRecordZoneWithID:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didEndFetchingChangesForZoneID:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 didSaveRecordZone:(CKRecordZone *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToDeleteRecordZoneWithID:(CKRecordZoneID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToFetchChangesForRecordZoneID:(CKRecordZoneID *)arg2 error:(NSError *)arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 failedToSaveRecordZone:(CKRecordZone *)arg2 error:(NSError *)arg3;
- (CKSyncEngineBatch *)syncEngine:(CKSyncEngine *)arg1 nextBatchOfRecordsToModifyForZoneIDs:(NSSet *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 willBeginFetchingChangesForZoneIDs:(NSArray *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDChanged:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasDeleted:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasDeletedDueToUserEncryptedDataReset:(CKRecordZoneID *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 zoneWithIDWasPurged:(CKRecordZoneID *)arg2;
- (void)syncEngineDidEndFetchingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineDidEndModifyingPendingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineWillBeginFetchingChanges:(CKSyncEngine *)arg1;
- (void)syncEngineWillBeginModifyingPendingChanges:(CKSyncEngine *)arg1;

@end
