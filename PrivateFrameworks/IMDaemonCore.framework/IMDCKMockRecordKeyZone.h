
@interface IMDCKMockRecordKeyZone : IMDCKMockRecordZone

- (void)_handleFetchingExitRecordOperation:(id)arg1;
- (void)_handleWritingCloudKitMetrics:(id)arg1;
- (bool)_operationIsCloudKitMetricsOperation:(id)arg1;
- (void)handleOperation:(id)arg1;

@end
