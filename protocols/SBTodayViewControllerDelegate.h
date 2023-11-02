
@protocol SBTodayViewControllerDelegate <NSObject>

@required

- (bool)isTodayViewRotating:(SBTodayViewController *)arg1;
- (void)todayViewControllerWillPresentSpotlight:(SBTodayViewController *)arg1;
- (void)todayViewDidAppear:(SBTodayViewController *)arg1;
- (void)todayViewWantsToEndEditing:(SBTodayViewController *)arg1;

@end
