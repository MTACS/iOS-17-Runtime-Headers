
@protocol PKPayLaterFinancingPlansFetcherObserver <NSObject>

@required

- (void)invalidatedInstallmentsMonth;
- (void)invalidatedInstallmentsMonthsWithDates:(NSArray *)arg1;

@end
