
@interface SwiftUI.SwiftUISearchController : UISearchController <UISearchControllerDelegate, _UISearchControllerDelegatePrivate, _UISearchResultsUpdating_dci> {
    void $__lazy_storage_$__searchBar;
    void coordinator;
    void pendingIsActive;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  searchItem;
    void suggestions;
    void targetController;
}

@property (nonatomic, readonly) UISearchBar *searchBar;

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSearchResultsController:(id)arg1;
- (id)searchBar;
- (void)searchController:(id)arg1 willChangeToSearchBarPlacement:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1 selectingSearchSuggestion:(id)arg2;
- (void)viewIsAppearing:(bool)arg1;

@end
