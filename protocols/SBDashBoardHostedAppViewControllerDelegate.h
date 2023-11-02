
@protocol SBDashBoardHostedAppViewControllerDelegate <NSObject>

@optional

- (bool)dashBoardHostedAppViewController:(SBDashBoardHostedAppViewController *)arg1 shouldTransitionToMode:(long long)arg2;
- (void)dashBoardHostedAppViewControllerDidFailToActivateApplication:(SBDashBoardHostedAppViewController *)arg1;

@end
