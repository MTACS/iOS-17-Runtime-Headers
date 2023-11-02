
@protocol SUUIStorePageCollectionViewDelegate <UICollectionViewDelegateFlowLayout>

@optional

- (IKColor *)backgroundColorForSection:(long long)arg1;
- (bool)collectionView:(UICollectionView *)arg1 canScrollCellAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didEndEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2 pinningContentInsetForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2 pinningGroupForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2 pinningStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2 pinningTransitionStyleForItemAtIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2 willApplyLayoutAttributes:(SUUICollectionViewLayoutAttributes *)arg3;
- (void)collectionView:(UICollectionView *)arg1 willBeginEditingItemAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)indexPathsForGradientItemsInCollectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2;
- (NSArray *)indexPathsForPinningItemsInCollectionView:(UICollectionView *)arg1 layout:(SUUIStorePageCollectionViewLayout *)arg2;

@end
