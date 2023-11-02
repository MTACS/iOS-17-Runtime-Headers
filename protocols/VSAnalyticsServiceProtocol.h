
@protocol VSAnalyticsServiceProtocol <NSObject>

@required

- (void)recordFederatedPunchoutEventWithError:(NSError *)arg1 metadata:(NSDictionary *)arg2;
- (void)recordMetricsCenterClickEventWithPage:(NSString *)arg1 pageType:(NSString *)arg2 data:(NSDictionary *)arg3;
- (void)recordMetricsCenterEnterEventWithPage:(NSString *)arg1 pageType:(NSString *)arg2 data:(NSDictionary *)arg3;
- (void)recordMetricsCenterExitEventWithPage:(NSString *)arg1 pageType:(NSString *)arg2 data:(NSDictionary *)arg3;
- (void)recordMetricsCenterFlexibleEventWithName:(NSString *)arg1 data:(NSDictionary *)arg2;
- (void)recordNowPlayingBrokenEventWithBundleID:(NSString *)arg1;

@end
