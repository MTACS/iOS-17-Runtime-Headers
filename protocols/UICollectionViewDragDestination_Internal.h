
@protocol UICollectionViewDragDestination_Internal <UICollectionViewDragDestination>

@optional

- (NSIndexPath *)_collectionView:(UICollectionView *)arg1 dragDestinationTargetIndexPathForProposedIndexPath:(NSIndexPath *)arg2 currentIndexPath:(NSIndexPath *)arg3 dropSession:(id <UIDropSession>)arg4;

@end
