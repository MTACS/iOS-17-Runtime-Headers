
@interface PKHeaderVerticalScrollingLayout : UICollectionViewCompositionalLayout <PKDashboardLayout> {
    double  _headerHeight;
    NSIndexPath * _headerIndexPath;
    double  _horizontalInset;
    bool  _needsCustomLocation;
    unsigned long long  _titleInset;
    bool  _useStickyHeader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fade;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long titleInset;
@property (nonatomic) bool useStickyHeader;

- (void).cxx_destruct;
- (id)_customAttributesForStickyHeader:(id)arg1;
- (bool)_indexPathIsHeaderIndexPath:(id)arg1;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutSectionAtIndex:(long long)arg1 layoutEnvironment:(id)arg2;
- (void)prepareLayout;
- (void)setTitleInset:(unsigned long long)arg1;
- (void)setUseStickyHeader:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)titleInset;
- (bool)useStickyHeader;

@end
