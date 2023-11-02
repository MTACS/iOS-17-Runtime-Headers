
@protocol CKUploadMergeableDeltasOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleReplacementRequest:(CKReplaceDeltasRequest *)arg1 error:(NSError *)arg2;
- (void)handleUploadForDeltaIdentifier:(NSString *)arg1 error:(NSError *)arg2;

@end
