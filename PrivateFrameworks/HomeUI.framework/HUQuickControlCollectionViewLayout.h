
@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout {
    NSMutableDictionary * _cachedLayoutAttributesByIndexPath;
    NSMutableDictionary * _cachedSectionHeaderLayoutAttributes;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSLayoutConstraint * _heightConstraint;
    HUQuickControlCollectionViewLayoutInfo * _layoutInfo;
    HUQuickControlGridLayoutManager * _layoutManager;
    HUQuickControlCollectionViewControllerLayoutOptions * _layoutOptions;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedLayoutAttributesByIndexPath;
@property (nonatomic, readonly) NSMutableDictionary *cachedSectionHeaderLayoutAttributes;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) HUQuickControlCollectionViewLayoutInfo *layoutInfo;
@property (nonatomic, retain) HUQuickControlGridLayoutManager *layoutManager;
@property (nonatomic, retain) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (void)_computeGridLayoutAttributesForLayoutInfo:(id)arg1;
- (void)_computeLayoutInfo;
- (id)_computeRowLayoutOriginsFromLayoutDetails:(id)arg1 forSectionSettings:(id)arg2;
- (id)_computeRowLayoutsForGridLayout:(id)arg1 gridLayoutSettings:(id)arg2;
- (id)_computeSizingLayoutInfo;
- (id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2;
- (id)cachedLayoutAttributesByIndexPath;
- (id)cachedSectionHeaderLayoutAttributes;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (id)heightConstraint;
- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutInfo;
- (id)layoutManager;
- (id)layoutOptions;
- (void)prepareLayout;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
