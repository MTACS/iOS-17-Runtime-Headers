
@interface SeymourUI.CatalogPage : NSObject <UICollectionViewDataSourcePrefetching, UICollectionViewDelegate> {
    void collectionView;
    void currentSnapshotBacking;
    void dataSource;
    void delegate;
    void identifier;
    void impressionsTracker;
    void layoutSections;
    void locationStore;
    void pendingUpdatesCount;
    void platform;
    void previousSnapshotBacking;
    void registrationProviderByShelfID;
    void safeAreaObservingIndexPaths;
    void shelfOffsetPerLayoutSection;
    void shelves;
    void shouldAutomaticallyDeselectItem;
    void snapshotTimestamps;
    void storefrontRTLHandlingCellsFlag;
    void viewFactory;
}

@property (nonatomic, readonly) UICollectionView *accessibilityCollectionView;

- (void).cxx_destruct;
- (id)accessibilityCollectionView;
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (struct CGPoint { double x1; double x2; })collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg2 atCurrentIndexPath:(id)arg3 toProposedIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)init;
- (void)rebuildLocations;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;

@end
