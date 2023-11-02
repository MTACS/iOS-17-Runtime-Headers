
@protocol _UICollectionLayoutSectionCallback <NSObject>

@required

- (void)_enrichLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 interactionState:(id <_UICollectionViewLayoutInteractionStateProviding>)arg2;
- (UICollectionViewLayoutInvalidationContext *)_invalidationContextForCellBackgroundOrBottomSeparatorChangeAtIndexPath:(NSIndexPath *)arg1 interactionState:(id <_UICollectionViewLayoutInteractionStateProviding>)arg2 separatorOnly:(bool)arg3;
- (bool)_shouldInvalidateForScrollViewLayoutAdjustmentsChange;
- (void)_transformFittingLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 interactionState:(id <_UICollectionViewLayoutInteractionStateProviding>)arg2;
- (void)_transformPreferredLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 interactionState:(id <_UICollectionViewLayoutInteractionStateProviding>)arg2;

@end
