
@interface GKLeaderboardCollectionDataSource : GKGameLayerCollectionDataSource

- (long long)allowedColumnCount:(long long)arg1;
- (double)cellSpacing;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 updateLayoutForSectionHeader:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)headerSpacing;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (double)topMargin;
- (void)updateHighlightsInSectionHeader:(id)arg1;

@end
