
@protocol _UISearchControllerDelegatePrivate <UISearchControllerDelegate>

@optional

- (void)_dci_searchController:(UISearchController *)arg1 didChangeToSearchBarPlacement:(long long)arg2;
- (void)_dci_searchController:(UISearchController *)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)_dci_searchController:(UISearchController *)arg1 willDismissSearchSuggestionsMenuWasSuggestionSelected:(bool)arg2;
- (void)_searchController:(UISearchController *)arg1 didSelectSuggestion:(id <UISearchSuggestion>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)_searchController:(UISearchController *)arg1 insertSearchFieldTextSuggestion:(UITextSuggestion *)arg2;
- (void)_searchSuggestionCollectionView:(UICollectionView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)_searchSuggestionCollectionView:(UICollectionView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)_searchSuggestionScrollViewDidScroll:(UIScrollView *)arg1;

@end
