
@protocol SFAddSavedAccountViewControllerDelegate <NSObject>

@optional

- (void)addSavedAccountViewControllerDidFinish:(SFAddSavedAccountViewController *)arg1 withSavedAccount:(WBSSavedAccount *)arg2;
- (_SFAccountIconController *)iconControllerForAddSavedAccountDetailViewController:(SFAddSavedAccountViewController *)arg1;

@end
