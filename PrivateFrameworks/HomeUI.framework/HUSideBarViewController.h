
@interface HUSideBarViewController : HUItemCollectionViewController <HFHomeObserver, HFItemManagerDelegate, UICollectionViewDelegate, UICollectionViewDropDelegate, UIViewControllerTransitioningDelegate> {
    UIView * _blurView;
    bool  _hideRoomSection;
    HMHome * _home;
    bool  _shouldUseDashboardEffects;
    <HUSideBarDelegate> * _sideBarDelegate;
}

@property (nonatomic, retain) UIView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideRoomSection;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HUSideBarItemManager *itemManager;
@property (nonatomic) bool shouldUseDashboardEffects;
@property (nonatomic) <HUSideBarDelegate> *sideBarDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_selectItemAtIndexPath:(id)arg1;
- (void)_sendSideBarInteractionEventForItem:(id)arg1;
- (void)_updateAppearance;
- (void)_updateBlurView;
- (void)_updateNavigationBar;
- (void)_updateShouldUseDashboardEffects;
- (void)_updateSplitViewSeparator;
- (id)blurView;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didReorderItemWithSortedItemsBySectionID:(id)arg1;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;
- (bool)hideRoomSection;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)homeDidUpdateApplicationData:(id)arg1;
- (void)homeDidUpdateToROAR:(id)arg1;
- (id)initWithDelegate:(id)arg1 forHome:(id)arg2;
- (long long)preferredStatusBarStyle;
- (void)refreshSideBarSelection;
- (void)setBlurView:(id)arg1;
- (void)setHideRoomSection:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setShouldUseDashboardEffects:(bool)arg1;
- (void)setSideBarDelegate:(id)arg1;
- (bool)shouldUseDashboardEffects;
- (id)sideBarDelegate;
- (void)switchToDiscover;
- (void)switchToSelectedHome:(id)arg1;
- (void)updateSelectionToItem:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
