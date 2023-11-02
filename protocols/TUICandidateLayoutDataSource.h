
@protocol TUICandidateLayoutDataSource <UICollectionViewDataSource>

@required

- (unsigned long long)autofillExtraCandidatesCount;
- (struct CGSize { double x1; double x2; })collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 sizeForItemAtIndexPath:(NSIndexPath *)arg3;
- (double)collectionView:(UICollectionView *)arg1 layout:(UICollectionViewLayout *)arg2 widthForGroupHeaderInSection:(long long)arg3;
- (unsigned long long)slottedCandidatesCount;

@end
