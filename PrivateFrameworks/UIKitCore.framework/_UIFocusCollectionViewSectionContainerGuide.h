
@interface _UIFocusCollectionViewSectionContainerGuide : UIFocusContainerGuide {
    UICollectionView * _collectionView;
    long long  _section;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;

- (void).cxx_destruct;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (id)collectionView;
- (id)initWithCollectionView:(id)arg1;
- (long long)section;
- (void)setCollectionView:(id)arg1;
- (void)setSection:(long long)arg1;

@end
