
@protocol ANAnalyticsDailyMessagingProtocol

@required

- (NSDictionary *)devicesCountingAnnouncements;
- (bool)isDeviceAnalyticsCoordinator;
- (void)registerDailyRequest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*
- (void)sendDailyRequest:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
