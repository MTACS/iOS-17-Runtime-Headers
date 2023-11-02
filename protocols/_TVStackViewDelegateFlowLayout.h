
@protocol _TVStackViewDelegateFlowLayout <UICollectionViewDelegateFlowLayout>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForSectionAtIndex:(long long)arg3;

@optional

- (void)collectionView:(UICollectionView *)arg1 showcaseFactorDidChangeForLayout:(UICollectionViewLayout *)arg2;

@end
