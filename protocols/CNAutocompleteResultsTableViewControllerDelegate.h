
@protocol CNAutocompleteResultsTableViewControllerDelegate <NSObject>

@optional

- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didAskToRemoveRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didCollapseSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didEndDisplayingRowForRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didExpandSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didRequestInfoAboutRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2 atIndex:(unsigned long long)arg3;
- (CNComposeRecipient *)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 preferredRecipientForRecipient:(CNComposeRecipient *)arg2;
- (CNComposeRecipient *)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 preferredRecipientForRecipients:(NSArray *)arg2;
- (void)autocompleteResultsController:(void *)arg1 tintColorForRecipient:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CNAutocompleteResultsTableViewController *, CNComposeRecipient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIColor *, void*
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willCollapseSelectedRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willDisplayRowForRecipient:(CNComposeRecipient *)arg2;
- (void)autocompleteResultsController:(CNAutocompleteResultsTableViewController *)arg1 willExpandSelectedRecipient:(CNComposeRecipient *)arg2;
- (bool)autocompleteResultsController:(void *)arg1 willOverrideImageDataForRecipient:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: CNAutocompleteResultsTableViewController *, CNComposeRecipient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)autocompleteResultsControllerWillBeginToScroll:(CNAutocompleteResultsTableViewController *)arg1;

@end
