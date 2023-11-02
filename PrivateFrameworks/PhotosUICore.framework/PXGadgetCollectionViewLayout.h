
@interface PXGadgetCollectionViewLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout> {
    double  _columnWidth;
    <PXGadgetCollectionViewLayoutDelegate> * _delegate;
    double  _interSectionSpacing;
    bool  _isPageFullColumnnWidth;
    long long  _pageSizeClass;
    bool  _prefersPagingEnabled;
    PXGadgetSpec * _spec;
}

@property (nonatomic) double columnWidth;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetCollectionViewLayoutDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interSectionSpacing;
@property (nonatomic) bool isPageFullColumnnWidth;
@property (nonatomic) long long pageSizeClass;
@property (nonatomic) bool prefersPagingEnabled;
@property (nonatomic, retain) PXGadgetSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_buttonTypeForGadget:(id)arg1;
- (bool)_disablesDoubleSidedAnimations;
- (bool)_hasButtonForGadget:(id)arg1;
- (unsigned long long)_sectionHeaderStyleForGadget:(id)arg1;
- (bool)_shouldShowSectionHeaderForGadget:(id)arg1;
- (id)_titleForGadget:(id)arg1;
- (void)_updateMinimumLineSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)columnWidth;
- (id)delegate;
- (bool)flipsHorizontallyInOppositeLayoutDirection;
- (double)interSectionSpacing;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPageFullColumnnWidth;
- (long long)pageSizeClass;
- (bool)prefersPagingEnabled;
- (void)setColumnWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterSectionSpacing:(double)arg1;
- (void)setIsPageFullColumnnWidth:(bool)arg1;
- (void)setPageSizeClass:(long long)arg1;
- (void)setPrefersPagingEnabled:(bool)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setSpec:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)spec;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
