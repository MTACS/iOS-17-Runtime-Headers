
@protocol HKHeartRateSummaryQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSummary:(HKHeartRateSummary *)arg1 queryUUID:(NSUUID *)arg2;

@end
