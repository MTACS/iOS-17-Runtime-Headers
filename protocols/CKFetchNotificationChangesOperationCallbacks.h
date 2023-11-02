
@protocol CKFetchNotificationChangesOperationCallbacks <CKOperationCallbacks>

@required

- (void)handleChangedNotification:(CKNotification *)arg1;
- (void)handleOperationDidCompleteWithServerChangeToken:(CKServerChangeToken *)arg1 moreComing:(bool)arg2 metrics:(CKOperationMetrics *)arg3 error:(NSError *)arg4;

@end
