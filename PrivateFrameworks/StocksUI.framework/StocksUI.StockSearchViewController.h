
@interface StocksUI.StockSearchViewController : UIViewController <UICollectionViewDelegate, UISearchBarDelegate, UISearchControllerDelegate> {
    void blueprintSelectionProvider;
    void blueprintViewController;
    void commands;
    void delegate;
    void eventHandler;
    void keyboardInputMonitor;
    void searchAction;
    void searchBar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stockSearchMode;
    void styler;
    void userActivityManager;
}

@property (nonatomic, readonly) UISplitViewController *splitViewController;

- (void).cxx_destruct;
- (void)didPresentSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)splitViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
