
@protocol CNAccountsAndGroupsViewControllerDelegate <NSObject>

@required

- (bool)accountsAndGroupsViewController:(CNAccountsAndGroupsViewController *)arg1 shouldEnableItemWithIdentifier:(NSString *)arg2;
- (void)accountsAndGroupsViewControllerDidCancel:(CNAccountsAndGroupsViewController *)arg1;
- (void)accountsAndGroupsViewControllerDidFinish:(CNAccountsAndGroupsViewController *)arg1;
- (void)accountsAndGroupsViewControllerDidUpdateSelection:(CNAccountsAndGroupsViewController *)arg1;

@end
