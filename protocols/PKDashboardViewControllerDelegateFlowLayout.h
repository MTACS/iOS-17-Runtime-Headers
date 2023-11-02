
@protocol PKDashboardViewControllerDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@optional

- (bool)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 hasFooterForSectionAtIndex:(long long)arg3;
- (bool)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 hasHeaderForSectionAtIndex:(long long)arg3;
- (bool)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 isListSectionAtIndex:(long long)arg3;
- (UISwipeActionsConfiguration *)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 trailingSwipeActionsConfigurationForItemAtIndexPath:(NSIndexPath *)arg3;
- (bool)itemIsIndependentInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (bool)itemIsStackableInCollectionView:(UICollectionView *)arg1 atIndexPath:(NSIndexPath *)arg2;

@end
