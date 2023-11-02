
@protocol CKFetchWebAuthTokenOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleOperationDidCompleteWithWebAuthToken:(NSString *)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;

@end
