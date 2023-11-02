
@interface CNMeCardSharingOnboardingAvatarCarouselLayout : UICollectionViewFlowLayout

+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint { double x1; double x2; })arg1 collectionView:(id)arg2 layout:(id)arg3;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 numberOfItems:(long long)arg3;
- (double)pageOffsetForIndex:(long long)arg1;
- (double)pagingLength;
- (double)pagingOrigin;
- (long long)selectedPageIndex;

@end
