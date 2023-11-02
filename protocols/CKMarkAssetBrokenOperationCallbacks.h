
@protocol CKMarkAssetBrokenOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleMarkAssetBrokenCompletionWithRepairRecordID:(CKRecordID *)arg1 error:(NSError *)arg2;

@end
