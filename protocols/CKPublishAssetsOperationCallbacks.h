
@protocol CKPublishAssetsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleAssetPublishCompletionForRecordID:(CKRecordID *)arg1 publishedAsset:(CKAsset *)arg2 recordKey:(NSString *)arg3 error:(NSError *)arg4;

@end
