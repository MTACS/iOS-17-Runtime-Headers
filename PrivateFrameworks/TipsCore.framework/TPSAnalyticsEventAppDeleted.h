
@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (id)event;
+ (bool)supportsSecureCoding;

- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
