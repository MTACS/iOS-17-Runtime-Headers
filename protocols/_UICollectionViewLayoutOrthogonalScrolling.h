
@protocol _UICollectionViewLayoutOrthogonalScrolling <NSObject>

@required

- (NSArray *)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_hasOrthogonalScrollingSections;
- (struct CGPoint { double x1; double x2; })_offsetForOrthogonalScrollingSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)_orthogonalScrollingAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingContentRectForSection:(long long)arg1;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (bool)_orthogonalScrollingElementShouldAppearAboveForAttributes:(UICollectionViewLayoutAttributes *)arg1;
- (bool)_orthogonalScrollingElementShouldAppearBelowForAttributes:(UICollectionViewLayoutAttributes *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (NSIndexSet *)_orthogonalScrollingSections;
- (void)_setOffset:(struct CGPoint { double x1; double x2; })arg1 forOrthogonalScrollingSection:(long long)arg2;
- (bool)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;
- (bool)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(NSIndexPath *)arg1 elementKind:(NSString *)arg2;

@end
