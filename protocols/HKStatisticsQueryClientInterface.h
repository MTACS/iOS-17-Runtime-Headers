
@protocol HKStatisticsQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverStatistics:(HKStatistics *)arg1 forQuery:(NSUUID *)arg2;

@end
