
@interface PKSearchResultsSearchController : UISearchController {
    UINavigationController * _navVC;
    PKSearchResultsViewController * _resultsVC;
    bool  _searchBarWasFirstResponder;
    bool  _showSearchBar;
}

- (void).cxx_destruct;
- (void)_updateSearchBarFrame;
- (id)initWithPaymentDataProvider:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3;
- (bool)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (long long)preferredStatusBarStyle;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (void)setSearchBarVisible:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
