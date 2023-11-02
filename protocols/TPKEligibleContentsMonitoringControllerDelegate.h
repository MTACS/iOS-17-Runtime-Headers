
@protocol TPKEligibleContentsMonitoringControllerDelegate <NSObject>

@required

- (NSDictionary *)eligibleContentsMonitoringController:(TPKEligibleContentsMonitoringController *)arg1 clientContextMapForKeys:(NSArray *)arg2;
- (void)eligibleContentsMonitoringController:(TPKEligibleContentsMonitoringController *)arg1 restartTrackingForContents:(NSArray *)arg2;
- (void)eligibleContentsMonitoringController:(TPKEligibleContentsMonitoringController *)arg1 shouldDismissContent:(TPKContent *)arg2 reason:(long long)arg3;
- (void)eligibleContentsMonitoringController:(TPKEligibleContentsMonitoringController *)arg1 shouldDisplayContent:(TPKContent *)arg2 animated:(bool)arg3;

@end
