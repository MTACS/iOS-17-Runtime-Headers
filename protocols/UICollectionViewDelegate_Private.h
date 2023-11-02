
@protocol UICollectionViewDelegate_Private <UICollectionViewDelegate, UICollectionViewFocusDelegate_Legacy>

@optional

- (NSArray *)_collectionView:(UICollectionView *)arg1 accessoriesForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 layoutAnchor:(struct { unsigned long long x1; unsigned long long x2; double x3; double x4; long long x5; })arg3;
- (void)_collectionView:(UICollectionView *)arg1 horizontalIndexTitleBar:(_UIHorizontalIndexTitleBar *)arg2 selectedEntry:(_UIFocusFastScrollingIndexBarEntry *)arg3;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 indexPathOfReferenceItemToPreserveContentOffsetWithProposedReference:(NSIndexPath *)arg2;
- (void)_collectionView:(UICollectionView *)arg1 orthogonalScrollViewDidScroll:(id <_UICollectionViewOrthogonalScrollView>)arg2 section:(long long)arg3;
- (_UIWindowSceneActivationConfiguration *)_collectionView:(UICollectionView *)arg1 sceneActivationConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (bool)_collectionView:(UICollectionView *)arg1 shouldApplyTransitionContentOffset:(struct CGPoint { double x1; double x2; })arg2 contentSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)_collectionView:(UICollectionView *)arg1 shouldSpringLoadItemAtIndexPath:(NSIndexPath *)arg2 withContext:(id <UISpringLoadedInteractionContext>)arg3;
- (_UIContextMenuStyle *)_collectionView:(UICollectionView *)arg1 styleForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (struct CGPoint { double x1; double x2; })_collectionView:(UICollectionView *)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 targetIndexPathForMoveFromItemAtIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;
- (UITargetedPreview *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 previewForDismissingToItemAtIndexPath:(NSIndexPath *)arg3;
- (UITargetedPreview *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfiguration:(UIContextMenuConfiguration *)arg2 previewForHighlightingItemAtIndexPath:(NSIndexPath *)arg3;
- (UIContextMenuConfiguration *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfigurationForItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (UIContextMenuConfiguration *)_dci_collectionView:(UICollectionView *)arg1 contextMenuConfigurationForSelectedItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (NSIndexPath *)_indexPathOfReferenceItemForLayoutTransitionInCollectionView:(UICollectionView *)arg1;

@end
