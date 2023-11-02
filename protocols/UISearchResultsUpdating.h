
@protocol UISearchResultsUpdating <NSObject>

@required

- (void)updateSearchResultsForSearchController:(UISearchController *)arg1;

@optional

- (void)updateSearchResultsForSearchController:(UISearchController *)arg1 selectingSearchSuggestion:(id <UISearchSuggestion>)arg2;

@end
