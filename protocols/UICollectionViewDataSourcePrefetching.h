
@protocol UICollectionViewDataSourcePrefetching <NSObject>

@required

- (void)collectionView:(UICollectionView *)arg1 prefetchItemsAtIndexPaths:(NSArray *)arg2;

@optional

- (void)collectionView:(UICollectionView *)arg1 cancelPrefetchingForItemsAtIndexPaths:(NSArray *)arg2;

@end
