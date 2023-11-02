
@interface SFNestedCollectionViewCell : UICollectionViewCell {
    UICollectionView * _collectionView;
}

@property (nonatomic, retain) UICollectionView *collectionView;

- (void).cxx_destruct;
- (void)_setUpCollectionViewIfNeeded;
- (id)collectionView;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setCollectionView:(id)arg1;

@end
