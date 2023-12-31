
@protocol PUCollectionViewReorderDelegate <NSObject>

@required

- (void)collectionView:(void *)arg1 moveItemAtIndexPath:(void *)arg2 toIndexPath:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: PUCollectionView *, NSIndexPath *, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (bool)collectionView:(PUCollectionView *)arg1 canReorderItemAtIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)collectionView:(PUCollectionView *)arg1 targetIndexPathForMoveFromIndexPath:(NSIndexPath *)arg2 toProposedIndexPath:(NSIndexPath *)arg3;

@end
