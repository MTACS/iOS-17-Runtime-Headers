
@interface _UICollectionViewDiffableDataSource : _UIDiffableDataSourceSnapshotter

@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, copy) id /* block */ supplementaryConfigurationHandler;
@property (nonatomic, copy) id /* block */ supplementaryReuseIdentifierProvider;
@property (nonatomic, copy) id /* block */ supplementaryViewProvider;

- (id)collectionView;
- (id)initWithCollectionView:(id)arg1 cellProvider:(id /* block */)arg2;
- (id)initWithCollectionView:(id)arg1 reuseIdentifierProvider:(id /* block */)arg2 cellConfigurationHandler:(id /* block */)arg3;
- (void)setSupplementaryConfigurationHandler:(id /* block */)arg1;
- (void)setSupplementaryReuseIdentifierProvider:(id /* block */)arg1;
- (void)setSupplementaryViewProvider:(id /* block */)arg1;
- (id /* block */)supplementaryConfigurationHandler;
- (id /* block */)supplementaryReuseIdentifierProvider;
- (id /* block */)supplementaryViewProvider;

@end
