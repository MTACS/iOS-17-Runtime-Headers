
@protocol CKRepairAssetsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleAssetRepairCompletionForRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;

@end
