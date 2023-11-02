
@protocol CKReplaceMergeableDeltasOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleCompletedReplaceDeltasRequest:(CKReplaceDeltasRequest *)arg1 error:(NSError *)arg2;

@end
