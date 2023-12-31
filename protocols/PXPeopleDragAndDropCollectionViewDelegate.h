
@protocol PXPeopleDragAndDropCollectionViewDelegate <NSObject>

@optional

- (void)collectionViewDidCancelDrag:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidEndDrag:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidEndInteractiveMode:(PXPeopleDragAndDropCollectionView *)arg1;
- (void)collectionViewDidLayout:(PXPeopleDragAndDropCollectionView *)arg1;

@end
