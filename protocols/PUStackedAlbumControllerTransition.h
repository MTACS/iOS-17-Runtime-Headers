
@protocol PUStackedAlbumControllerTransition <NSObject>

@required

- (UICollectionView *)collectionView;
- (PUSectionedGridLayout *)gridLayout;
- (void)handleTransitionFade:(bool)arg1 animate:(bool)arg2;
- (bool)isEmpty;
- (void)setAlbumListTransitionContext:(PUAlbumListTransitionContext *)arg1;
- (void)setAlbumListTransitionLayout:(UICollectionViewLayout *)arg1 animated:(bool)arg2;

@end
