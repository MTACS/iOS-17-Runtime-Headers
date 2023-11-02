
@interface PXPhotosSearchController : NSObject <UISearchBarDelegate> {
    void delegate;
    void searchBar;
    void searchQueryController;
    void searchResultsViewController;
    void searchViewModel;
}

- (void).cxx_destruct;
- (id)init;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;

@end
