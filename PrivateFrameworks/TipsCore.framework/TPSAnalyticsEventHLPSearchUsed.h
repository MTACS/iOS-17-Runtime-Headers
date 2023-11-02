
@interface TPSAnalyticsEventHLPSearchUsed : TPSAnalyticsEvent

+ (id)event;
+ (bool)supportsSecureCoding;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;

@end
