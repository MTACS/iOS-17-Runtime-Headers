
@interface STSCategoryViewController : UIViewController <STSCategoryTitleTableViewCellDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _categories;
    NSMutableArray * _displayedResults;
    bool  _isScrolling;
    NSMutableArray * _model;
    NSArray * _recents;
    STSSearchModel * _searchModel;
    <STSCategoryViewControllerDelegate> * _selectionDelegate;
    bool  _sendFeedbackOnViewDidAppear;
}

@property (nonatomic, retain) NSArray *categories;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *model;
@property (nonatomic, retain) NSArray *recents;
@property (nonatomic, retain) STSSearchModel *searchModel;
@property (nonatomic) <STSCategoryViewControllerDelegate> *selectionDelegate;
@property (nonatomic) bool sendFeedbackOnViewDidAppear;
@property (readonly) Class superclass;
@property (nonatomic, retain) STSCategoryView *view;

- (void).cxx_destruct;
- (void)_commitClearRecents;
- (void)_reportFeedbackDisplayedResultsDidScroll:(bool)arg1;
- (id)_searchResultIdentifierForSuggestion:(id)arg1 recent:(bool)arg2;
- (id)categories;
- (void)clearButton:(id)arg1 pressedForCategoryResult:(id)arg2;
- (void)clearRecents;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)init;
- (id)model;
- (id)recents;
- (void)reload;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchModel;
- (id)selectionDelegate;
- (bool)sendFeedbackOnViewDidAppear;
- (void)sendRankSectionsFeedback;
- (void)sendVisibleResultsFeedback;
- (void)setCategories:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setModel:(id)arg1;
- (void)setRecents:(id)arg1;
- (void)setSearchModel:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setSendFeedbackOnViewDidAppear:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateContentOffset:(double)arg1;
- (void)updateModel;
- (void)updateRecents:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
