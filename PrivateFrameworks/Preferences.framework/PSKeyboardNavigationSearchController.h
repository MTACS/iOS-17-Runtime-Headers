
@interface PSKeyboardNavigationSearchController : UISearchController {
    PSKeyboardNavigationSearchBar * searchBar;
    UIViewController<PSKeyboardNavigationSearchResultsController> * searchResultsController;
}

@property (nonatomic, retain) PSKeyboardNavigationSearchBar *searchBar;
@property (nonatomic, retain) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (void).cxx_destruct;
- (void)_downArrowKeyPressed;
- (void)_escapeKeyPressed;
- (void)_upArrowKeyPressed;
- (id)initWithSearchResultsController:(id)arg1;
- (id)searchBar;
- (id)searchResultsController;
- (void)setSearchBar:(id)arg1;
- (void)setSearchResultsController:(id)arg1;

@end
