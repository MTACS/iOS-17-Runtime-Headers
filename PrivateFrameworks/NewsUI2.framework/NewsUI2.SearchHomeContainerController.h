
@interface NewsUI2.SearchHomeContainerController : TUViewController <UISearchBarDelegate, UISearchControllerDelegate> {
    void currentSearchTerm;
    void delegate;
    void searchBar;
    void searchHomeViewController;
    void searchResultsViewController;
    void styler;
    void toolbarManager;
}

- (void).cxx_destruct;
- (id)contentScrollView;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
