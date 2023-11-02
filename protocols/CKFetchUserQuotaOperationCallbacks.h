
@protocol CKFetchUserQuotaOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(CKOperationMetrics *)arg2 error:(NSError *)arg3;

@end
