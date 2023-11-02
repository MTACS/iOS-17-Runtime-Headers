
@protocol HKMCDaySummaryQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverDaySummaries:(NSArray *)arg1 clearPending:(bool)arg2 isFinalBatch:(bool)arg3 daySummaryAnchor:(NSNumber *)arg4 queryUUID:(NSUUID *)arg5;

@end
