
@interface PUImportChangeDetailsCollectionViewHelper : NSObject {
    UICollectionView * _collectionView;
}

@property (nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (void)applyChangeDetails:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)collectionView;
- (id)initWithCollectionView:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 changeHistory:(id)arg3 animated:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
