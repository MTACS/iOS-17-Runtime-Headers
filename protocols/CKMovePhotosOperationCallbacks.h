
@protocol CKMovePhotosOperationCallbacks <CKModifyRecordsOperationCallbacks>

@required

- (void)handleMoveForSourceRecordID:(CKRecordID *)arg1 destinationMetadata:(CKRecordXPCMetadata *)arg2 moveMarkerMetadata:(CKRecordXPCMetadata *)arg3 error:(NSError *)arg4;

@end
