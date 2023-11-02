
@interface PKDynamicCollectionViewController : UIViewController <PKDynamicListDataChangeDelegate, PKPaymentSetupViewControllerLifeCycleDelegate, UICollectionViewDelegate> {
    NSMutableDictionary * _cellRegistrations;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    bool  _deselectSelectedCellsOnViewWillAppear;
    bool  _isViewControllerActive;
    NSMutableDictionary * _itemsMap;
    NSMutableDictionary * _itemsPendingDeletion;
    bool  _retainCellSelectionCellOnReload;
    NSArray * _sectionIdentifiers;
    NSDictionary * _sectionMap;
    NSArray * _sections;
    NSMutableDictionary * _supplementaryViewRegistrations;
    bool  _useItemIdentityWhenUpdating;
    bool  _viewDidAppear;
}

@property (nonatomic, retain) UICollectionView *collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deselectSelectedCellsOnViewWillAppear;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool retainCellSelectionCellOnReload;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic) bool useItemIdentityWhenUpdating;

- (void).cxx_destruct;
- (id)_cellRegistrationForSection:(id)arg1 itemIdentifier:(id)arg2 item:(id)arg3;
- (void)_deselectCellsForce:(bool)arg1;
- (id)_indexPathForItem:(id)arg1;
- (id)_indexPathForItemIdentifier:(id)arg1;
- (void)_reloadDataForSections:(id)arg1 recreateSnapshot:(bool)arg2 animated:(bool)arg3;
- (void)_reloadSectionMapForSections:(id)arg1 animated:(bool)arg2;
- (id)_sectionAtIndex:(long long)arg1;
- (id)_sectionAtIndexPath:(id)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (id)_sectionIdentifierForIndex:(long long)arg1;
- (id)_supplementaryRegistrationForSection:(id)arg1 sectionIdentifier:(id)arg2 elementKind:(id)arg3;
- (id)cellForItem:(id)arg1;
- (id)collectionView;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)deselectCells;
- (bool)deselectSelectedCellsOnViewWillAppear;
- (id)init;
- (id)layout;
- (void)loadView;
- (void)reconfigureHeaderAndFooterForSectionIdentifier:(id)arg1;
- (void)reloadAnimated:(bool)arg1;
- (void)reloadDataAnimated:(bool)arg1;
- (void)reloadDataForSection:(id)arg1 animated:(bool)arg2;
- (void)reloadDataForSectionIdentifier:(id)arg1 animated:(bool)arg2;
- (void)reloadDataWithoutRebuildingDataStores;
- (void)reloadItem:(id)arg1 animated:(bool)arg2;
- (bool)retainCellSelectionCellOnReload;
- (void)scrollToItem:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(bool)arg3;
- (id)sections;
- (void)setCollectionView:(id)arg1;
- (void)setDeselectSelectedCellsOnViewWillAppear:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setRetainCellSelectionCellOnReload:(bool)arg1;
- (void)setSections:(id)arg1 animated:(bool)arg2;
- (void)setUseItemIdentityWhenUpdating:(bool)arg1;
- (bool)useItemIdentityWhenUpdating;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDismissModalView;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
