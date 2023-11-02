
@interface WFEditorDrawerHostingViewController : UIViewController {
    void delegate;
    void headerHeight;
    void hostingViewController;
    void navigationStyle;
    void resultsController;
    void scrollViewObserver;
    void state;
}

@property (nonatomic) <WFActionDrawerDelegate> *delegate;
@property (nonatomic) double headerHeight;
@property (nonatomic) unsigned long long navigationStyle;
@property (nonatomic, retain) WFActionDrawerResultsController *resultsController;
@property (nonatomic) <WFActionDrawerScrollViewObserver> *scrollViewObserver;

- (void).cxx_destruct;
- (void)clearSearchBar;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)delegate;
- (void)didTransitionToVisibility:(unsigned long long)arg1;
- (void)focusSearchBar;
- (double)headerHeight;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithResultsController:(id)arg1;
- (void)loadView;
- (unsigned long long)navigationStyle;
- (void)performScrollingTest:(id)arg1;
- (id)resultsController;
- (id)scrollViewObserver;
- (void)setDelegate:(id)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setNavigationStyle:(unsigned long long)arg1;
- (void)setResultsController:(id)arg1;
- (void)setScrollViewObserver:(id)arg1;
- (void)viewDidLoad;

@end
