
@protocol CKFetchRegisteredBundleIDsOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleOperationDidCompleteWithBundleIDs:(NSArray *)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;

@end
