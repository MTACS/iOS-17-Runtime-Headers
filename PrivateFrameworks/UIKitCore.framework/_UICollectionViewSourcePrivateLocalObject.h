
@interface _UICollectionViewSourcePrivateLocalObject : NSObject {
    UICollectionView * _collectionView;
    NSIndexPath * _indexPath;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, retain) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)collectionView;
- (id)indexPath;
- (id)initWithIndexPath:(id)arg1 collectionView:(id)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setIndexPath:(id)arg1;

@end
