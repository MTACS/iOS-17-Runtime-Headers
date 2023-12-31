
@interface VUIShelfViewLayout : UICollectionViewLayout {
    <VUIShelfViewLayoutDelegate> * _delegate;
    double  _headerBottomMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _headerReferenceSize;
    double  _headerSelectionMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _itemSize;
    VUIShelfLayoutHelper * _layoutHelper;
    double  _minimumInteritemSpacing;
    double  _minimumLineSpacing;
    long long  _prominentSectionIndex;
    long long  _rowCount;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sectionInset;
    NSArray * _shelfLayoutSections;
    bool  _shouldSnapContent;
}

@property (nonatomic) <VUIShelfViewLayoutDelegate> *delegate;
@property (nonatomic) double headerBottomMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } headerReferenceSize;
@property (nonatomic) double headerSelectionMargin;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic, retain) VUIShelfLayoutHelper *layoutHelper;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) long long prominentSectionIndex;
@property (nonatomic) long long rowCount;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionInset;
@property (nonatomic, retain) NSArray *shelfLayoutSections;
@property (nonatomic) bool shouldSnapContent;

+ (double)defaultHeaderSelectionMargin;

- (void).cxx_destruct;
- (bool)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2;
- (id)_indexPathForItemAtProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingSelectionFrameForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (double)computedContentHeight;
- (long long)computedRowCount;
- (id)delegate;
- (double)headerBottomMargin;
- (struct CGSize { double x1; double x2; })headerReferenceSize;
- (double)headerSelectionMargin;
- (id)indexPathForSnappedContent;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutHelper;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)prepareLayout;
- (long long)prominentSectionIndex;
- (long long)rowCount;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setDelegate:(id)arg1;
- (void)setHeaderBottomMargin:(double)arg1;
- (void)setHeaderReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHeaderSelectionMargin:(double)arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutHelper:(id)arg1;
- (void)setMinimumInteritemSpacing:(double)arg1;
- (void)setMinimumLineSpacing:(double)arg1;
- (void)setProminentSectionIndex:(long long)arg1;
- (void)setRowCount:(long long)arg1;
- (void)setSectionInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShelfLayoutSections:(id)arg1;
- (void)setShouldSnapContent:(bool)arg1;
- (id)shelfLayoutSections;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldSnapContent;
- (void)snapContent;
- (void)snapContentToIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end
