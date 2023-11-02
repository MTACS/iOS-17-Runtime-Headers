
@protocol MUCollectionViewDiffableDataSourceCellProviding <NSObject>

@required

- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2 itemIdentifier:(id)arg3;

@optional

- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;

@end
