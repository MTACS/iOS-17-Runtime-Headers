
@protocol CNAutocompleteSearchControllerDelegate <NSObject>

@required

- (CNComposeRecipient *)searchController:(CNAutocompleteSearchController *)arg1 composeRecipientForAddress:(NSString *)arg2;

@optional

- (void)didTapTextViewAccessoryButtonForSearchController:(CNAutocompleteSearchController *)arg1;
- (void)didTapTextViewAccessoryButtonForSearchController:(CNAutocompleteSearchController *)arg1 anchoredToView:(UIView *)arg2;
- (UIContextMenuConfiguration *)searchController:(CNAutocompleteSearchController *)arg1 contextMenuConfigurationForRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didAddRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didEndDisplayingRowForRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didRemoveRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didTapTableAccessoryForRecipient:(CNComposeRecipient *)arg2;
- (bool)searchController:(void *)arg1 imageDataForRecipient:(void *)arg2 imageUpdateBlock:(void *)arg3; // needs 3 arg types, found 8: CNAutocompleteSearchController *, CNComposeRecipient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (CNComposeRecipient *)searchController:(CNAutocompleteSearchController *)arg1 preferredRecipientForRecipient:(CNComposeRecipient *)arg2;
- (unsigned long long)searchController:(CNAutocompleteSearchController *)arg1 presentationOptionsForRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 textViewTextDidChange:(NSString *)arg2;
- (UIColor *)searchController:(CNAutocompleteSearchController *)arg1 tintColorForRecipient:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 willDisplayRowForRecipient:(CNComposeRecipient *)arg2;

@end
