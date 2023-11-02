
@protocol SBActivityObserver <NSObject>

@required

- (bool)shouldHandleActivityItem:(SBActivityItem *)arg1;

@optional

- (void)activityDidDismiss:(SBActivityItem *)arg1;
- (void)activityDidEnd:(SBActivityItem *)arg1;
- (void)activityDidExceedReducedPushBudget:(SBActivityItem *)arg1;
- (void)activityDidStart:(SBActivityItem *)arg1;
- (void)activityDidUpdate:(SBActivityItem *)arg1;
- (void)activityEnvironmentChanged:(long long)arg1;
- (void)activityProminenceChanged:(bool)arg1 item:(SBActivityItem *)arg2;
- (void)activityWasBlocked:(SBActivityItem *)arg1;
- (void)activityWasUnblocked:(SBActivityItem *)arg1;
- (void)dismissAlert:(SBActivityAlert *)arg1;
- (void)presentAlert:(SBActivityAlert *)arg1;

@end
