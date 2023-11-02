
@protocol CNAutocompleteGroupDetailViewControllerDelegate <NSObject>

@required

- (void)autocompleteGroupDetailViewController:(CNAutocompleteGroupDetailViewController *)arg1 didAskToRemoveGroup:(CNRecentComposeRecipientGroup *)arg2;
- (void)autocompleteGroupDetailViewController:(CNAutocompleteGroupDetailViewController *)arg1 didTapComposeRecipient:(CNRecentComposeRecipient *)arg2;
- (void)autocompleteGroupDetailViewControllerDidCancel:(CNAutocompleteGroupDetailViewController *)arg1;

@end
