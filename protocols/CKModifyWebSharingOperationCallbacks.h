
@protocol CKModifyWebSharingOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleWebSharingInitiationForRecordID:(CKRecordID *)arg1 sharingKey:(NSData *)arg2 baseSharingToken:(NSString *)arg3 error:(NSError *)arg4;
- (void)handleWebSharingRevocationForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;

@end
