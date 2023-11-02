
@protocol UICollectionViewDragDelegate <NSObject>

@required

- (NSArray *)collectionView:(UICollectionView *)arg1 itemsForBeginningDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;

@optional

- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dragPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (bool)collectionView:(UICollectionView *)arg1 dragSessionAllowsMoveOperation:(id <UIDragSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dragSessionDidEnd:(id <UIDragSession>)arg2;
- (bool)collectionView:(UICollectionView *)arg1 dragSessionIsRestrictedToDraggingApplication:(id <UIDragSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dragSessionWillBegin:(id <UIDragSession>)arg2;
- (NSArray *)collectionView:(UICollectionView *)arg1 itemsForAddingToDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3 point:(struct CGPoint { double x1; double x2; })arg4;

@end
