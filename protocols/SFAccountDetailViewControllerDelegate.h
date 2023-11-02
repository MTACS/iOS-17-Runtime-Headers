
@protocol SFAccountDetailViewControllerDelegate <NSObject>

@optional

- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 didDeleteAccountWithWarning:(WBSPasswordWarning *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 didHideWarning:(WBSPasswordWarning *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 didMoveSavedAccountToRecentlyDeleted:(WBSSavedAccount *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 fillPasswordForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 fillUsernameForSavedAccount:(WBSSavedAccount *)arg2;
- (void)accountDetailViewController:(SFAccountDetailViewController *)arg1 fillVerificationCodeForSavedAccount:(WBSSavedAccount *)arg2;
- (_SFAccountIconController *)iconControllerForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
- (WBSPasswordGenerationManager *)passwordGeneratorForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
- (WBSPasswordWarningManager *)passwordWarningManagerForAccountDetailViewController:(SFAccountDetailViewController *)arg1;
- (WBSSavedAccount *)savedAccountToRemoveAfterCompletedUpgradeInDetailView;
- (void)setSavedAccountToRemoveAfterCompletedUpgradeInDetailView:(WBSSavedAccount *)arg1;

@end
