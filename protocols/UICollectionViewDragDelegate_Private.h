
@protocol UICollectionViewDragDelegate_Private <UICollectionViewDragDelegate>

@optional

- (long long)_collectionView:(UICollectionView *)arg1 dataOwnerForDragSession:(id <UIDragSession>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (_UIDragSessionProperties *)_collectionView:(UICollectionView *)arg1 dragSessionPropertiesForSession:(id <UIDragSession>)arg2;
- (bool)_collectionView:(UICollectionView *)arg1 dragSessionSupportsSystemDrag:(id <UIDragSession>)arg2;
- (bool)_collectionView:(UICollectionView *)arg1 prefersFullSizePreviewsForDragSession:(id <UIDragSession>)arg2;

@end
