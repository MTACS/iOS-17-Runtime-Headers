
@interface SKUITrendingSearchDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    UIViewController * _privacyViewController;
    SKUITrendingSearchView * _resultsView;
    SKUITrendingSearchTemplateElement * _template;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewController *privacyViewController;
@property (nonatomic, retain) SKUITrendingSearchView *resultsView;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUITrendingSearchTemplateElement *template;

- (void).cxx_destruct;
- (void)_reloadResultsView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_resultsViewContentInset;
- (void)documentDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (id)privacyViewController;
- (id)resultsView;
- (void)resultsViewTapRecognized:(id)arg1;
- (void)searchResultButtonTapped:(id)arg1;
- (void)setPrivacyViewController:(id)arg1;
- (void)setResultsView:(id)arg1;
- (void)setTemplate:(id)arg1;
- (id)template;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
