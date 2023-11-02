
@protocol ANAnalyticsDailyDelegate <NSObject>

@required

- (void)dailyReport:(NSString *)arg1 withPayload:(NSDictionary *)arg2;
- (void)dailyReportComplete;
- (void)dailyReportError:(long long)arg1;

@end
