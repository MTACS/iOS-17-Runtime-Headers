
@protocol SFFluidTabOverviewViewSwipeDeleteInteractionDelegate <NSObject>

@optional

- (bool)fluidCollectionView:(SFFluidCollectionView *)arg1 interaction:(SFFluidTabOverviewSwipeDeleteInteraction *)arg2 canDeleteItemAtIndexPath:(NSIndexPath *)arg3;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 interaction:(SFFluidTabOverviewSwipeDeleteInteraction *)arg2 didDeleteItemAtIndexPath:(NSIndexPath *)arg3;

@end
