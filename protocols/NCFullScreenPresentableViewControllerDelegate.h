
@protocol NCFullScreenPresentableViewControllerDelegate <NCNotificationRequestPresentingDelegate>

@required

- (void)fullScreenPresentableViewController:(NCFullScreenPresentableViewController *)arg1 requestsDismissalWithReason:(NSString *)arg2;

@optional

- (bool)fullScreenPresentableViewControllerShouldTransitionToDetailStageOnTap:(NCFullScreenPresentableViewController *)arg1;

@end
