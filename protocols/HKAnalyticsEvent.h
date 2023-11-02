
@protocol HKAnalyticsEvent

@required

- (NSString *)eventName;
- (bool)isEventSubmissionIHAGated;
- (NSDictionary *)makeIHAGatedEventPayloadWithDataSource:(HKAnalyticsDataSource *)arg1 error:(id*)arg2;
- (NSDictionary *)makeUnrestrictedEventPayloadWithDataSource:(HKAnalyticsDataSource *)arg1 error:(id*)arg2;

@end
