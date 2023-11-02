
@interface TabGroupPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDragDelegate, UICollectionViewDropDelegate, WBTabGroupManagerObserver> {
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    UIBarButtonItem * _doneButton;
    bool  _isReordering;
    bool  _needsReloadData;
    <TabGroupProvider> * _tabGroupProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_checkmarkAccessory;
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)_enumerateTabGroupSectionsWithBlock:(id /* block */)arg1;
- (void)_reloadData;
- (void)_reloadDataIfNeeded;
- (void)_removeDataUnrelatedToTabGroups;
- (bool)_shouldShowCheckmarkForTabGroup:(id)arg1;
- (id)_swipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_updateTitle;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (void)doneButtonTapped;
- (id)initWithTabGroupProvider:(id)arg1;
- (void)loadView;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNeedsReloadData;
- (void)tabGroupManager:(id)arg1 didUpdateProfileWithIdentifier:(id)arg2 difference:(id)arg3;
- (void)tabGroupManager:(id)arg1 didUpdateTabGroupWithUUID:(id)arg2;
- (void)tabGroupManagerDidUpdateProfiles:(id)arg1;
- (void)tabGroupManagerDidUpdateTabGroups:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
