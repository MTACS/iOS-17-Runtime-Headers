
@protocol ASPasswordAuthenticationPaneViewControllerDelegate <NSObject>

@required

- (void)passwordAuthenticationViewController:(ASPasswordAuthenticationPaneViewController *)arg1 completedWithManuallyEnteredPasswordCredential:(ASCPasswordCredential *)arg2;
- (void)passwordAuthenticationViewController:(ASPasswordAuthenticationPaneViewController *)arg1 completedWithUserEnteredPIN:(NSString *)arg2;

@end
