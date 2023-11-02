
@protocol CPAnalyticsDestination <CPAnalyticsDestinationProtocol>

@required

- (id)init;
- (id)initWithConfig:(NSDictionary *)arg1 cpAnalyticsInstance:(CPAnalytics *)arg2;
- (void)updateWithConfig:(NSDictionary *)arg1;

@optional

- (bool)disabled;

@end
