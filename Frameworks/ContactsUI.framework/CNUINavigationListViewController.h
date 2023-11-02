
@interface CNUINavigationListViewController : UIViewController <CNUINavigationListViewDataSource, CNUINavigationListViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    CNUINavigationListViewCellHeightEstimator * _cellHeightEstimator;
    long long  _contentAlignment;
    <CNUINavigationListViewControllerDelegate> * _delegate;
    CNUINavigationListItem * _displayedExpandedItem;
    CNUINavigationListItem * _expandedItem;
    bool  _ignoreParentControllerResize;
    NSArray * _items;
    <CNUINavigationListStyle> * _navigationListStyle;
    CNUINavigationListView * _navigationListView;
    bool  _showFirstSectionTopSeparator;
}

@property (nonatomic, retain) CNUINavigationListViewCellHeightEstimator *cellHeightEstimator;
@property (nonatomic) long long contentAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNUINavigationListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNUINavigationListItem *displayedExpandedItem;
@property (nonatomic, retain) CNUINavigationListItem *expandedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreParentControllerResize;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) <CNUINavigationListStyle> *navigationListStyle;
@property (nonatomic, retain) CNUINavigationListView *navigationListView;
@property (nonatomic) bool showFirstSectionTopSeparator;
@property (readonly) Class superclass;

+ (bool)itemRequiresDetailCell:(id)arg1;

- (void).cxx_destruct;
- (bool)canExpandItem:(id)arg1;
- (bool)canSelectItem:(id)arg1;
- (id)cellHeightEstimator;
- (double)cellSeparatorHeight;
- (long long)contentAlignment;
- (struct CGSize { double x1; double x2; })contentSizeForExpandedItem:(id)arg1;
- (id)delegate;
- (id)dequeueReusableDetailCell;
- (id)dequeueReusableStandardCell;
- (id)displayedExpandedItem;
- (void)expandItem:(id)arg1;
- (id)expandedItem;
- (bool)ignoreParentControllerResize;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)itemAtIndex:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (id)itemsForItem:(id)arg1;
- (void)loadView;
- (id)navigationListStyle;
- (id)navigationListView;
- (void)navigationListView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)navigationListView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)navigationListView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)navigationListView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (void)reloadNavigationListView;
- (void)setCellHeightEstimator:(id)arg1;
- (void)setContentAlignment:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedExpandedItem:(id)arg1;
- (void)setExpandedItem:(id)arg1;
- (void)setIgnoreParentControllerResize:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setNavigationListStyle:(id)arg1;
- (void)setNavigationListView:(id)arg1;
- (void)setShowFirstSectionTopSeparator:(bool)arg1;
- (bool)showFirstSectionTopSeparator;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (void)styleUpdated;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (void)toggleItem:(id)arg1;
- (void)updateNavigationListView;
- (void)updateNavigationListViewStateAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
