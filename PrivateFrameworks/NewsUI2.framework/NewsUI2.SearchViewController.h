
@interface NewsUI2.SearchViewController : TUViewController <UICollectionViewDelegate, UISearchBarDelegate, UISearchControllerDelegate> {
    void blueprintViewController;
    void clearAction;
    void eventHandler;
    void origination;
    void refreshQueryParam;
    void refreshRecentSearch;
    void sceneStateManager;
    void searchAction;
    void searchBar;
    void sharingActivityProviderFactory;
    void styler;
}

- (void).cxx_destruct;
- (id)contentScrollView;
- (void)didDismissSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
