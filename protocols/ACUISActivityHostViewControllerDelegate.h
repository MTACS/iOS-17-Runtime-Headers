
@protocol ACUISActivityHostViewControllerDelegate <NSObject>

@optional

- (void)activityHostViewController:(ACUISActivityHostViewController *)arg1 didSetIdleTimerDisabled:(bool)arg2;
- (void)activityHostViewController:(ACUISActivityHostViewController *)arg1 requestsLaunchWithAction:(BSAction *)arg2;
- (void)activityHostViewControllerAudioCategoriesDisablingVolumeHUDDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerBackgroundTintColorDidChange:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerHostShouldCancelTouches:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerSignificantUserInteractionBegan:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerSignificantUserInteractionEnded:(ACUISActivityHostViewController *)arg1;
- (void)activityHostViewControllerTextColorDidChange:(ACUISActivityHostViewController *)arg1;

@end
