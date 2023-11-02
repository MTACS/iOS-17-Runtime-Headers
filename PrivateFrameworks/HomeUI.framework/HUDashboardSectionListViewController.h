
@interface HUDashboardSectionListViewController : HUItemCollectionViewController <HFHomeObserver, HUCollectionLayoutManagerDelegate> {
    void $__lazy_storage_$_layoutManager;
    void dashboardContext;
}

- (void).cxx_destruct;
- (void)_cancel;
- (void)_done;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didReorderItemWithSortedItemsBySectionID:(id)arg1;
- (id)displayedItemsInSection:(id)arg1;
- (void)home:(id)arg1 didUpdateApplicationDataForRoom:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)viewDidLoad;

@end
