
@protocol CNAutocompleteSearchControllerInternalDelegate <CNAutocompleteSearchControllerDelegate>

@optional

- (void)searchController:(CNAutocompleteSearchController *)arg1 didAddRecipientByResultsController:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didAddRecipientBySuggestionsController:(CNComposeRecipient *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didHideResultsView:(UIView *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 didShowResultsView:(UIView *)arg2;
- (bool)searchController:(void *)arg1 supplementalGroupsForSearchQuery:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: CNAutocompleteSearchController *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)searchController:(CNAutocompleteSearchController *)arg1 textViewDidChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 textViewWillChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 willHideResultsView:(UIView *)arg2;
- (void)searchController:(CNAutocompleteSearchController *)arg1 willShowResultsView:(UIView *)arg2;

@end
