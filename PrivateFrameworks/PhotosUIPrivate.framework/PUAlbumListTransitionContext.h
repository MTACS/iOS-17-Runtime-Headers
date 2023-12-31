
@interface PUAlbumListTransitionContext : NSObject {
    <PLAssetContainer> * _collection;
    NSIndexPath * _keyItemIndexPath;
    PHCollection * _phCollection;
    PUPhotoDecoration * _photoDecoration;
    UICollectionViewTransitionLayout * _transitionLayout;
    bool  _usesContentOffsetAutoAdjust;
}

@property (nonatomic, retain) <PLAssetContainer> *collection;
@property (nonatomic, retain) NSIndexPath *keyItemIndexPath;
@property (nonatomic, retain) PHCollection *phCollection;
@property (nonatomic, retain) PUPhotoDecoration *photoDecoration;
@property (nonatomic, retain) UICollectionViewTransitionLayout *transitionLayout;
@property (nonatomic) bool usesContentOffsetAutoAdjust;

- (void).cxx_destruct;
- (id)collection;
- (id)keyItemIndexPath;
- (id)phCollection;
- (id)photoDecoration;
- (void)setCollection:(id)arg1;
- (void)setKeyItemIndexPath:(id)arg1;
- (void)setPhCollection:(id)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setTransitionLayout:(id)arg1;
- (void)setUsesContentOffsetAutoAdjust:(bool)arg1;
- (id)transitionLayout;
- (bool)usesContentOffsetAutoAdjust;

@end
