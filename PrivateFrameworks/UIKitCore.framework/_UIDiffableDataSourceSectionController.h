
@interface _UIDiffableDataSourceSectionController : NSObject <NSCopying> {
    NSSet * _associatedSectionIdentifiers;
    __UIDiffableDataSource * _dataSource;
    <_UIDiffableDataSourceSectionControllerDelegate> * _delegate;
    _UIDiffableDataSourceSectionControllerHandlers * _handlers;
    NSArray * _itemRenderers;
    NSMapTable * _snapshotsMap;
}

@property (nonatomic, readonly) NSSet *associatedSectionIdentifiers;
@property (nonatomic, copy) _UIDiffableDataSourceSectionControllerHandlers *handlers;
@property (nonatomic, readonly) NSArray *itemRenderers;

- (void).cxx_destruct;
- (void)__applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)_applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 viewPropertyAnimator:(id)arg4 animationsProvider:(id /* block */)arg5 completion:(id /* block */)arg6;
- (id)_collectionView;
- (void)_configureCell:(id)arg1 forItem:(id)arg2;
- (void)_configureForDataSource:(id)arg1;
- (void)_configureForItemRenderersIfNeeded:(id)arg1;
- (id /* block */)_customCollapseExpandAnimationsForSnapshot:(id)arg1 initialSectionSnapshot:(id)arg2 finalSectionSnapshot:(id)arg3 viewPropertyAnimator:(id)arg4 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 sectionIndex:(long long)arg6;
- (id)_extantMutableSnapshotForItem:(id)arg1;
- (id)_extantMutableSnapshotForSection:(id)arg1;
- (id)_parentFocusItemForItem:(id)arg1;
- (bool)_performDisclosureAction:(unsigned long long)arg1 forItem:(id)arg2;
- (bool)_queryClientShouldCollapseItem:(id)arg1;
- (bool)_queryClientShouldExpandItem:(id)arg1;
- (bool)_queryClientShouldQueryForSnapshotForExpandingParentItem:(id)arg1;
- (id)_queryClientSnapshotForExpandingParentItemForItem:(id)arg1 currentSectionSnapshot:(id)arg2;
- (void)_queryClientWillCollapseItem:(id)arg1;
- (void)_queryClientWillExpandItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (bool)_shouldPerformCustomCollapseExpandAnimationsForInitialSnapshot:(id)arg1 finalSnapshot:(id)arg2;
- (id)_snapshotForSectionContainingItem:(id)arg1;
- (bool)_snapshotHasExpandOrCollapseUpdates:(id)arg1;
- (id)_snapshotsMap;
- (void)_updateAffectedVisibleCellConfigurationsForExapansionStateWithSnapshot:(id)arg1;
- (void)_updateSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 animatingDifferences:(bool)arg3 completion:(id /* block */)arg4;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 customAnimationsProvider:(id /* block */)arg3;
- (void)applySnapshot:(id)arg1 toSection:(id)arg2 viewPropertyAnimator:(id)arg3 customAnimationsProvider:(id /* block */)arg4;
- (id)associatedSectionIdentifiers;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSource;
- (id)delegate;
- (id)handlers;
- (id)initWithDiffableDataSource:(id)arg1;
- (id)initWithDiffableDataSourceImpl:(id)arg1;
- (id)initWithItemRenderers:(id)arg1;
- (id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2;
- (id)initWithItemRenderers:(id)arg1 associatedSectionIdentifiers:(id)arg2 snapshotsMap:(id)arg3 dataSource:(id)arg4;
- (id)itemRenderers;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHandlers:(id)arg1;
- (id)snapshotForItem:(id)arg1;
- (id)snapshotForSection:(id)arg1;

@end
