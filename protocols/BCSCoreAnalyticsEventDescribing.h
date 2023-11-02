
@protocol BCSCoreAnalyticsEventDescribing <NSObject>

@required

- (NSString *)coreAnalyticsEventName;
- (NSDictionary *)coreAnalyticsPayload;

@end
