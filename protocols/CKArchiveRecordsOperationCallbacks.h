
@protocol CKArchiveRecordsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleRecordArchivalForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;

@end
