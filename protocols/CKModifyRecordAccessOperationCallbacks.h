
@protocol CKModifyRecordAccessOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleRecordAccessInitiationForRecordID:(CKRecordID *)arg1 accessToken:(NSData *)arg2 referenceIdentifier:(NSString *)arg3 error:(NSError *)arg4;
- (void)handleRecordAccessRevocationForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;

@end
