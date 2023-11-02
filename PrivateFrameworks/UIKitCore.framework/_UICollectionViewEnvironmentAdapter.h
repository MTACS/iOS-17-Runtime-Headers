
@interface _UICollectionViewEnvironmentAdapter : NSObject {
    UICollectionView * _collectionView;
}

@property (getter=_collectionView, nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (id)_collectionView;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)createEnvironment;
- (id)initWithCollectionView:(id)arg1;
- (void)setCollectionView:(id)arg1;

@end
