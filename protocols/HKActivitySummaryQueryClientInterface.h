
@protocol HKActivitySummaryQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverActivitySummaries:(NSArray *)arg1 isFinalBatch:(bool)arg2 clearPendingBatches:(bool)arg3 queryUUID:(NSUUID *)arg4;

@end
