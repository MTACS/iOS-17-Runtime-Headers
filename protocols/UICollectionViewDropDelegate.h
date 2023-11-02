
@protocol UICollectionViewDropDelegate <NSObject>

@required

- (void)collectionView:(UICollectionView *)arg1 performDropWithCoordinator:(id <UICollectionViewDropCoordinator>)arg2;

@optional

- (bool)collectionView:(UICollectionView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dropPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UICollectionViewDropProposal *)collectionView:(UICollectionView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;

@end
