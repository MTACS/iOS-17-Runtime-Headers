
@protocol PUHorizontalTiledCollectionViewLayoutDelegate <NSObject>

@required

- (NSIndexPath *)layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 referenceIndexPathWithOffsetX:(double*)arg3;
- (struct CGSize { double x1; double x2; })layout:(PUHorizontalTiledCollectionViewLayout *)arg1 collectionView:(UICollectionView *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;

@end
