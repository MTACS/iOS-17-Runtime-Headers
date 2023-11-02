
@protocol SFFluidCollectionViewDelegate <UIScrollViewDelegate>

@optional

- (UIContextMenuConfiguration *)fluidCollectionView:(SFFluidCollectionView *)arg1 contextMenuConfigurationForItemsAtIndexPaths:(NSArray *)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (double)fluidCollectionView:(SFFluidCollectionView *)arg1 delayForAnimatingItemAtIndexPath:(NSIndexPath *)arg2 indexPathBeforeUpdate:(NSIndexPath *)arg3 update:(SFFluidCollectionViewUpdate *)arg4;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 didEndAnimatingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 didHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 didUnhighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)fluidCollectionView:(SFFluidCollectionView *)arg1 shouldHighlightItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)fluidCollectionView:(SFFluidCollectionView *)arg1 shouldSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 willBeginAnimatingItemAtIndexPath:(NSIndexPath *)arg2;
- (void)fluidCollectionView:(SFFluidCollectionView *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;

@end
