
@protocol PXComposeRecipientTableViewControllerDelegate <NSObject>

@required

- (void)dismissPresentedViewControllerAnimated:(bool)arg1 forComposeRecipientTableViewController:(PXComposeRecipientTableViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(bool)arg2 forComposeRecipientTableViewController:(PXComposeRecipientTableViewController *)arg3;

@optional

- (void)composeRecipientTableViewControllerDidChangeHeight:(PXComposeRecipientTableViewController *)arg1;

@end
