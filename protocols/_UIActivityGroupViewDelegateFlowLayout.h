
@protocol _UIActivityGroupViewDelegateFlowLayout <UICollectionViewDelegate>

@required

- (NSIndexPath *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 moveItemAtIndexPath:(NSIndexPath *)arg3 toIndexPath:(NSIndexPath *)arg4;
- (UIView *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 needsContainerViewForDraggingItemAtIndexPath:(NSIndexPath *)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 preferredSizeForItemAtIndexPath:(NSIndexPath *)arg3;

@end
