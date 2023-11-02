
@protocol HKMobilityAnalyticsEventMetric <NSObject>

@required

+ (bool)requiresImproveHealthAndActivityAllowed;

- (NSString *)eventName;
- (NSDictionary *)eventPayload;
- (bool)isImproveHealthAndActivityAllowed;

@end
