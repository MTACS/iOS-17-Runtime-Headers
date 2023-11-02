
@protocol SUUIAccountButtonsDelegate <NSObject>

@optional

- (void)accountButtonsViewControllerDidSignIn:(SUUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidSignOut:(SUUIAccountButtonsViewController *)arg1;
- (void)accountButtonsViewControllerDidTapECommerceLink:(SUUIAccountButtonsViewController *)arg1;

@end
