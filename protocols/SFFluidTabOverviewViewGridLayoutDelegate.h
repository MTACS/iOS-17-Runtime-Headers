
@protocol SFFluidTabOverviewViewGridLayoutDelegate <SFFluidCollectionViewDelegate>

@optional

- (unsigned long long)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 edgeForDeletedItemAtIndexPath:(NSIndexPath *)arg3;
- (double)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 heightForHeaderInSection:(unsigned long long)arg3;
- (double)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 heightForItemsInSection:(unsigned long long)arg3;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 insetsForSection:(unsigned long long)arg3;
- (double)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 maximumAspectRatioForItemsInSection:(unsigned long long)arg3;
- (double)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 minimumAspectRatioForItemsInSection:(unsigned long long)arg3;
- (unsigned long long)fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 numberOfColumnsForSection:(unsigned long long)arg3;
- (struct CGPoint { double x1; double x2; })fluidCollectionView:(SFFluidCollectionView *)arg1 layout:(SFFluidTabOverviewGridLayout *)arg2 spacingForItemsInSection:(unsigned long long)arg3;

@end
