
@protocol PXSearchRecipientControllerDelegate <NSObject>

@required

- (UIViewController *)viewControllerForPresentingContactViewControllerBySearchRecipientController:(PXSearchRecipientController *)arg1;

@optional

- (void)searchRecipientController:(PXSearchRecipientController *)arg1 didSelectRecipient:(PXRecipient *)arg2;
- (void)searchRecipientController:(PXSearchRecipientController *)arg1 numberOfSearchRecipientsDidChange:(unsigned long long)arg2;
- (void)searchRecipientController:(PXSearchRecipientController *)arg1 searchStateDidChange:(long long)arg2;

@end
