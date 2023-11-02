
@protocol DMCProfileViewControllerDelegate <NSObject>

@required

- (void)profileViewControllerDidSelectRemoveProfile:(DMCProfileViewController *)arg1;
- (bool)profileViewControllerIsProfileInstalled;

@optional

- (void)profileViewControllerDidSelectPoll:(DMCProfileViewController *)arg1;
- (void)profileViewControllerDidSelectUpdateProfile:(DMCProfileViewController *)arg1;
- (bool)profileViewControllerHideUpdateProfile:(DMCProfileViewController *)arg1;
- (bool)profileViewControllerShouldDisplayPoll:(DMCProfileViewController *)arg1;

@end
