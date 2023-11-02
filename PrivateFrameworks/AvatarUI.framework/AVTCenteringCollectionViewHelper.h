
@interface AVTCenteringCollectionViewHelper : NSObject

+ (struct CGPoint { double x1; double x2; })contentOffsetForCenteringPoint:(struct CGPoint { double x1; double x2; })arg1 collectionView:(id)arg2;
+ (id)indexPathForItemBeingScrolledTowardFromOffset:(struct CGPoint { double x1; double x2; })arg1 currentOffset:(struct CGPoint { double x1; double x2; })arg2 nearestItemToCenter:(id)arg3 itemCount:(unsigned long long)arg4 itemOffsetProvider:(id /* block */)arg5 ratio:(double*)arg6;
+ (id)indexPathForNearestItemToCenterWithOffset:(struct CGPoint { double x1; double x2; })arg1 collectionView:(id)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withFirstCellSize:(struct CGSize { double x1; double x2; })arg2 lastCellSize:(struct CGSize { double x1; double x2; })arg3;

@end
