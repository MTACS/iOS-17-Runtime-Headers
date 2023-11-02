
@interface _TtCV8VideosUI17HostedUISearchBar11Coordinator : NSObject <UISearchBarDelegate, UITextFieldDelegate> {
    void _isSearching;
    void _searchButtonClicked;
    void _text;
    void recordMetricsForSubmit;
}

- (void).cxx_destruct;
- (id)init;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (bool)textFieldShouldClear:(id)arg1;

@end
