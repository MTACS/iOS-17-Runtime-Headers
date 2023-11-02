
@protocol MTIDSyncEngineDelegate

@required

- (void)accountDidChangeWithUserRecordID:(CKRecordID *)arg1;
- (void)recordWasDeleted:(CKRecordID *)arg1;
- (void)recordWasFailedToSave:(CKRecord *)arg1;
- (void)recordWasFetched:(CKRecord *)arg1;
- (void)recordWasSaved:(CKRecord *)arg1;
- (CKRecord *)recordWithID:(CKRecordID *)arg1;
- (void)syncEngineDidStartWithError:(NSError *)arg1;

@end
