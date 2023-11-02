
@interface STSSuggestionViewController : UIViewController <STSSearchModelQuerySuggestionsDelegate, STSSuggestionViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    STSSearchModel * _searchModel;
    <STSSuggestionViewControllerDelegate> * _selectionDelegate;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) STSSearchModel *searchModel;
@property (nonatomic) <STSSuggestionViewControllerDelegate> *selectionDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) STSSuggestionView *view;

- (void).cxx_destruct;
- (void)_hideNoticeOverlay;
- (void)_updateFooterOrigin;
- (void)_updateFooterOriginForBoundsHeight:(double)arg1;
- (void)clearSuggestions;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)init;
- (void)noticeViewDidDismiss:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)searchModel;
- (void)searchModelUpdatedQuerySuggestions:(id)arg1;
- (void)searchModelWillFetchQuerySuggestionsCompletions:(id)arg1;
- (id)selectionDelegate;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)suggestionViewDidTapLogo:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateContentOffset:(double)arg1;
- (void)updateQuerySuggestions:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
