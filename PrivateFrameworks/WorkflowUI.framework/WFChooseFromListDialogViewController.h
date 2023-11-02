
@interface WFChooseFromListDialogViewController : WFCompactDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate> {
    NSMutableDictionary * _cachedAggregateHeightsByWidth;
    NSCache * _imageCache;
    UITableView * _listTableView;
    WFChooseFromListDialogCell * _prototypeCell;
    NSMutableArray * _selectedItems;
}

@property (nonatomic, retain) NSMutableDictionary *cachedAggregateHeightsByWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSCache *imageCache;
@property (nonatomic) UITableView *listTableView;
@property (nonatomic, retain) WFChooseFromListDialogCell *prototypeCell;
@property (nonatomic, retain) NSMutableArray *selectedItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedAggregateHeightsByWidth;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (void)dealloc;
- (void)finishWithSelectedItems;
- (id)imageCache;
- (id)initWithRequest:(id)arg1;
- (id)listTableView;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)platterView:(id)arg1 didUpdateContentVerticalOffset:(double)arg2;
- (id)prototypeCell;
- (id)selectedItems;
- (void)setAppearanceProvider:(id)arg1;
- (void)setCachedAggregateHeightsByWidth:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setListTableView:(id)arg1;
- (void)setPrototypeCell:(id)arg1;
- (void)setSelectedItems:(id)arg1;
- (bool)shouldInstallBannerDimmingLayer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;

@end
