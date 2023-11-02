
@protocol HKActivityStatisticsQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverResult:(_HKActivityStatisticsQueryResult *)arg1 query:(NSUUID *)arg2;

@end
