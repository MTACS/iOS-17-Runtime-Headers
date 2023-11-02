
@interface WFEditorDrawerViewController : UIViewController <WFActionDrawerScrollViewObserver> {
    <WFActionDrawerDelegate> * _delegate;
    WFEditorDrawerHostingViewController * _hostingViewController;
    unsigned long long  _navigationStyle;
    WFActionDrawerResultsController * _resultsController;
    WFEditorDrawerScrollViewDelegate * _scrollViewDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFActionDrawerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFEditorDrawerHostingViewController *hostingViewController;
@property (nonatomic) unsigned long long navigationStyle;
@property (nonatomic, readonly) WFActionDrawerResultsController *resultsController;
@property (nonatomic, readonly) WFEditorDrawerScrollViewDelegate *scrollViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activeScrollViewDidChange;
- (void)clearSearchBar;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (id)delegate;
- (void)didTransitionToVisibility:(unsigned long long)arg1;
- (void)focusSearchBar;
- (id)hostingViewController;
- (id)initWithResultsController:(id)arg1;
- (void)loadView;
- (unsigned long long)navigationStyle;
- (void)performScrollingTest:(id)arg1;
- (id)resultsController;
- (id)scrollViewDelegate;
- (void)setDelegate:(id)arg1;
- (void)setNavigationStyle:(unsigned long long)arg1;

@end
