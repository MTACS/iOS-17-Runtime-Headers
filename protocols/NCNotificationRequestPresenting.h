
@protocol NCNotificationRequestPresenting <NSObject>

@required

- (<NCInvalidatable> *)activeTransitionBlockingAssertionForReason:(NSString *)arg1;
- (NSSet *)activeTransitionBlockingAssertions;
- (<NCNotificationRequestPresentingDelegate> *)delegate;
- (NCNotificationRequest *)notificationRequest;
- (NSDictionary *)notificationUsageTrackingState;
- (<NCInvalidatable> *)requestTransitionBlockingAssertionWithReason:(NSString *)arg1;
- (void)setDelegate:(id <NCNotificationRequestPresentingDelegate>)arg1;
- (void)setNotificationRequest:(NCNotificationRequest *)arg1;

@end
