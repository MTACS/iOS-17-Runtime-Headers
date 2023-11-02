
@interface SFFluidTabOverviewGridLayout : SFFluidCollectionViewLayout {
    bool  _animatingBoundsSizeChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSMutableDictionary * _cachedLayoutAttributes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _itemSpacing;
    double  _maximumItemAspectRatio;
    double  _minimumItemAspectRatio;
    unsigned long long  _numberOfColumns;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousBounds;
    NSDictionary * _previousCachedLayoutAttributes;
    NSArray * _previousSectionInfos;
    double  _sectionHeaderHeight;
    NSArray * _sectionInfos;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionInsets;
    SFFluidCollectionViewUpdate * _update;
    bool  _usesAccessibilityContentSizeCategory;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } itemSpacing;
@property (nonatomic) double maximumItemAspectRatio;
@property (nonatomic) double minimumItemAspectRatio;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)finalLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeFluidCollectionUpdate;
- (void)finalizeLayout;
- (id)init;
- (id)initialLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })itemSpacing;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)maximumItemAspectRatio;
- (double)minimumItemAspectRatio;
- (unsigned long long)numberOfColumns;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForFluidCollectionUpdate:(id)arg1;
- (void)prepareLayout;
- (double)sectionHeaderHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (void)setItemSpacing:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMaximumItemAspectRatio:(double)arg1;
- (void)setMinimumItemAspectRatio:(double)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSectionInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForTraitCollectionChange:(id)arg1;

@end
