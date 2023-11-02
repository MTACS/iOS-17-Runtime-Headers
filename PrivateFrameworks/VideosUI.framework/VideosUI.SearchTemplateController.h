
@interface VideosUI.SearchTemplateController : VideosUI.VUIViewController <UISearchBarDelegate, UISearchBarDelegate_Private, UISearchControllerDelegate, VideosUI.VUIDeeplinkURLHandlingInterceptor> {
    void activeSearchState;
    void collectionImpressioner;
    void currentSearchTextInputSource;
    void document;
    void internalCustomSearchFieldWidth;
    void landingPageViewController;
    void loadingConfiguration;
    void maxSearchFieldWidth;
    void pageMetrics;
    void pagePerformanceProvider;
    void recentlySearchedDataManager;
    void resultsServiceRequest;
    void resultsViewController;
    void searchController;
    void searchHintsServiceRequest;
    void searchTopResultsServiceRequest;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_searchBar:(id)arg1 proposedSearchFieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)deeplinkURLWasHandled:(id)arg1;
- (void)handleWithKeyboardShowNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)vui_didMoveToParentViewController:(id)arg1;
- (void)vui_viewDidAppear:(bool)arg1;
- (void)vui_viewDidDisappear:(bool)arg1;
- (void)vui_viewDidLoad;
- (void)vui_viewWillAppear:(bool)arg1;
- (void)vui_viewWillDisappear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
