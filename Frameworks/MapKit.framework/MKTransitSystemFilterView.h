
@interface MKTransitSystemFilterView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    double  _cachedHeight;
    UICollectionView * _collectionView;
    UICollectionViewDiffableDataSource * _dataSource;
    <MKTransitSystemFilterViewDelegate> * _delegate;
    NSLayoutConstraint * _heightConstraint;
    unsigned long long  _selectedIndex;
    NSArray * _transitSystems;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitSystemFilterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long selectedIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *transitSystems;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setupCollectionView;
- (void)_setupConstraints;
- (void)_updateAppearance;
- (void)_updateSegmentPosition;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)selectedIndex;
- (void)setDelegate:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTransitSystems:(id)arg1;
- (id)transitSystems;

@end
