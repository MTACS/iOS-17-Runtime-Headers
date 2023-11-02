
@protocol SASUIDeviceScreenEngagementControllerDelegate

@required

- (void)deviceScreenEngagementController:(SASUIDeviceScreenEngagementController *)arg1 didGainAttentionWithEvent:(long long)arg2;
- (void)deviceScreenEngagementController:(SASUIDeviceScreenEngagementController *)arg1 didLoseAttentionWithEvent:(long long)arg2;

@end
