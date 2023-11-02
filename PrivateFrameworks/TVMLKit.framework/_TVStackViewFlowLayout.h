
@interface _TVStackViewFlowLayout : UICollectionViewLayout {
    IKChangeSet * _changeSet;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSIndexSet * _indexesAddedAtEnd;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    bool  _isFullReplace;
    double  _lastLayoutWidth;
    NSArray * _oldSectionCellLayoutAttributes;
    id /* block */  _onPrepareLayout;
    NSArray * _sectionCellLayoutAttributes;
    double  _showcaseFactor;
    double  _showcaseHeight;
    <_TVStackViewDelegateFlowLayout> * _stackViewDelegateFlowLayout;
    struct { 
        bool hasShowcaseFactorDidChange; 
    }  _stackViewDelegateFlowLayoutFlags;
    NSArray * _supplementaryCellLayoutAttributes;
    long long  _supplementaryCellSection;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) id /* block */ onPrepareLayout;
@property (nonatomic, copy) NSArray *sectionCellLayoutAttributes;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) double showcaseHeight;
@property (nonatomic, copy) NSArray *supplementaryCellLayoutAttributes;
@property (nonatomic) long long supplementaryCellSection;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (double)_computeShowcaseFactorForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_oldLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_prepareSectionMetrics;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id /* block */)onPrepareLayout;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)sectionCellLayoutAttributes;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOnPrepareLayout:(id /* block */)arg1;
- (void)setSectionCellLayoutAttributes:(id)arg1;
- (void)setShowcaseHeight:(double)arg1;
- (void)setSupplementaryCellLayoutAttributes:(id)arg1;
- (void)setSupplementaryCellSection:(long long)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)showcaseFactor;
- (double)showcaseHeight;
- (id)supplementaryCellLayoutAttributes;
- (long long)supplementaryCellSection;

@end
