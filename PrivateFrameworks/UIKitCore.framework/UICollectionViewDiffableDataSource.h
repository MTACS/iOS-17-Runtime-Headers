
@interface UICollectionViewDiffableDataSource : NSObject <UICollectionViewDataSource, _UIDiffableDataSourceIdentifying> {
    id /* block */  __didReorderItemsHandler;
    __UIDiffableDataSource * _impl;
}

@property (setter=_setAccessibilityDiffableDataSourceAnnotator:, nonatomic, copy) id /* block */ _accessibilityDiffableDataSourceAnnotator;
@property (nonatomic, copy) id /* block */ _didReorderItemsHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) __UIDiffableDataSource *impl;
@property (nonatomic, copy) UICollectionViewDiffableDataSourceReorderingHandlers *reorderingHandlers;
@property (nonatomic, copy) UICollectionViewDiffableDataSourceSectionSnapshotHandlers *sectionSnapshotHandlers;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ supplementaryViewProvider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 completion:(id /* block */)arg4;
- (id)_associatedSectionControllerForItemIdentifier:(id)arg1;
- (id)_associatedSectionControllerForSectionIdentifier:(id)arg1;
- (id /* block */)_canReorderItemHandler;
- (id /* block */)_didReorderItemsHandler;
- (id)_diffableDataSourceImpl;
- (bool)_isDiffableDataSource;
- (void)_performBatchApplyUsingReloadData:(id /* block */)arg1;
- (void)_registerItemRenderers:(id)arg1 rendererIdentifierProvider:(id /* block */)arg2;
- (void)_setCanReorderItemHandler:(id /* block */)arg1;
- (void)_setDidReorderItemsHandler:(id /* block */)arg1;
- (id)_snapshotForSection:(id)arg1;
- (bool)_subclassOverridesMethodWithSelector:(SEL)arg1;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2;
- (void)applySnapshot:(id)arg1 animatingDifferences:(bool)arg2 completion:(id /* block */)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 completion:(id /* block */)arg4;
- (void)applySnapshotUsingReloadData:(id)arg1;
- (void)applySnapshotUsingReloadData:(id)arg1 completion:(id /* block */)arg2;
- (id)collectionView;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)description;
- (id)impl;
- (long long)indexForSectionIdentifier:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithCollectionView:(id)arg1 itemRenderer:(id)arg2;
- (id)initWithCollectionView:(id)arg1 itemRenderers:(id)arg2 rendererIdentifierProvider:(id /* block */)arg3;
- (id)initWithCollectionView:(id)arg1 sectionControllers:(id)arg2 rendererIdentifierProvider:(id /* block */)arg3;
- (id)initWithViewUpdatesSink:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)reorderingHandlers;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (id)sectionSnapshotHandlers;
- (void)setImpl:(id)arg1;
- (void)setReorderingHandlers:(id)arg1;
- (void)setSectionSnapshotHandlers:(id)arg1;
- (void)setSupplementaryViewProvider:(id /* block */)arg1;
- (void)set_didReorderItemsHandler:(id /* block */)arg1;
- (id)snapshot;
- (id)snapshotForSection:(id)arg1;
- (id /* block */)supplementaryViewProvider;
- (void)validateIdentifiers;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_visibleFocusItemsInCollectionView:(id)arg1 forSection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)ic_firstIndexPathOfItemIdentifiers:(id)arg1;
- (id)ic_indexPathsOfItemIdentifiers:(id)arg1;
- (id)ic_sortedIndexPathsOfItemIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id /* block */)_accessibilityDiffableDataSourceAnnotator;
- (void)_setAccessibilityDiffableDataSourceAnnotator:(id /* block */)arg1;

@end
