
@protocol HKMHValenceDistributionSummaryQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverValenceDistributionSummaries:(NSArray *)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 queryUUID:(NSUUID *)arg4;

@end
