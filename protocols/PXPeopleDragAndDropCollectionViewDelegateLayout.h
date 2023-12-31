
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout <UICollectionViewDelegateFlowLayout>

@required

- (void)collectionView:(UICollectionView *)arg1 didBeginMergeWithDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didCancelMergeWithDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 didMergeDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;
- (bool)collectionView:(UICollectionView *)arg1 shouldMergeDragIndexPath:(NSIndexPath *)arg2 targetIndexPath:(NSIndexPath *)arg3;

@end
