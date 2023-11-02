
@interface TabOverviewDataSourceAdaptor : NSObject {
    TabOverviewItem * _currentItem;
    TabController * _tabController;
    WBTabGroup * _tabGroup;
    TabOverview * _tabOverview;
}

@property (nonatomic, readonly) TabController *tabController;
@property (nonatomic, readonly) WBTabGroup *tabGroup;
@property (nonatomic, retain) TabOverview *tabOverview;

- (void).cxx_destruct;
- (void)configureTabOverviewFromTabGroup;
- (id)currentItemForTabOverview:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTabGroup:(id)arg1 tabController:(id)arg2;
- (id)itemsToKeepVisibleForTabOverview:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setTabOverview:(id)arg1;
- (id)tabCollectionView:(id)arg1 borrowContentViewForItem:(id)arg2 withTopBackdropView:(id*)arg3 ofHeight:(double)arg4;
- (void)tabCollectionView:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3;
- (void)tabCollectionView:(id)arg1 closeItem:(id)arg2;
- (void)tabCollectionView:(id)arg1 didMoveItem:(id)arg2 overItem:(id)arg3;
- (void)tabCollectionView:(id)arg1 didSelectItem:(id)arg2;
- (void)tabCollectionView:(id)arg1 item:(id)arg2 didProduceNavigationIntent:(id)arg3;
- (void)tabCollectionView:(id)arg1 relinquishBorrowedContentView:(id)arg2 forItem:(id)arg3;
- (void)tabCollectionViewBeginIgnoringUserInteraction:(id)arg1 reason:(id)arg2;
- (void)tabCollectionViewDidCancelDismissal:(id)arg1;
- (void)tabCollectionViewDidDismiss:(id)arg1;
- (void)tabCollectionViewDidPresent:(id)arg1;
- (void)tabCollectionViewDidUpdateItemVisibilityOrder:(id)arg1;
- (void)tabCollectionViewEndIgnoringUserInteraction:(id)arg1 reason:(id)arg2;
- (void)tabCollectionViewWillDismiss:(id)arg1;
- (void)tabCollectionViewWillPresent:(id)arg1;
- (id)tabController;
- (id)tabGroup;
- (id)tabOverview;
- (void)tabOverview:(id)arg1 closeItems:(id)arg2;
- (void)tabOverview:(id)arg1 willInteractivelyCloseItem:(id)arg2;
- (void)tabOverviewDidChangeAllowsInteractivePresentation:(id)arg1;
- (void)tabOverviewWillUpdateInteractivePresentation:(id)arg1;
- (id)undoManagerForTabCollectionView:(id)arg1;

@end
