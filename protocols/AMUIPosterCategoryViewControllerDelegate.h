
@protocol AMUIPosterCategoryViewControllerDelegate <AMUIAmbientViewControllingDelegate>

@required

- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSetInlineAuthenticationViewVisible:(bool)arg2;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSetPasscodeVisible:(bool)arg2;
- (void)posterCategoryViewController:(AMUIPosterCategoryViewController *)arg1 didSettleOnConfiguration:(PRSPosterConfiguration *)arg2 interactive:(bool)arg3;
- (<AMAuthenticationHandling> *)posterCategoryViewControllerAuthenticationHandler:(AMUIPosterCategoryViewController *)arg1;
- (void)posterCategoryViewControllerDidSuccessfulyCompleteInlineAuthentication:(AMUIPosterCategoryViewController *)arg1;
- (bool)posterCategoryViewControllerHasInlineAuthenticated:(AMUIPosterCategoryViewController *)arg1;
- (bool)posterCategoryViewControllerIsAuthenticated:(AMUIPosterCategoryViewController *)arg1;

@end
