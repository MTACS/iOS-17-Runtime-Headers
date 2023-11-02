
@protocol AMUIPosterSwitcherViewControllerDelegate <AMUIAmbientViewControllingDelegate>

@required

- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSetInlineAuthenticationViewVisible:(bool)arg2;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSetPasscodeVisible:(bool)arg2;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 didSettleOnConfiguration:(PRSPosterConfiguration *)arg2 interactive:(bool)arg3;
- (void)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 isTransitioningSettled:(bool)arg2;
- (NSUUID *)posterSwitcherViewController:(AMUIPosterSwitcherViewController *)arg1 requestsLastSelectedConfigurationUUIDForProviderBundleIdentfier:(NSString *)arg2;
- (<AMAuthenticationHandling> *)posterSwitcherViewControllerAuthenticationHandler:(AMUIPosterSwitcherViewController *)arg1;
- (void)posterSwitcherViewControllerDidSuccessfullyCompleteInlineAuthentication:(AMUIPosterSwitcherViewController *)arg1;
- (bool)posterSwitcherViewControllerHasInlineAuthenticated:(AMUIPosterSwitcherViewController *)arg1;
- (bool)posterSwitcherViewControllerIsAuthenticated:(AMUIPosterSwitcherViewController *)arg1;

@end
