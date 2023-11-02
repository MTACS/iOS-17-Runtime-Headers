
@interface PRSidebarWidgetSuggestionsCollectionViewLayout : UICollectionViewLayout {
    NSDictionary * _computedAttributesByIndexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    double  _displayScale;
    <PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate> * _layoutDelegate;
}

@property (nonatomic, retain) NSDictionary *computedAttributesByIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) double displayScale;
@property (nonatomic) <PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate> *layoutDelegate;

- (void).cxx_destruct;
- (struct { long long x1; long long x2; })_gridCoordinateForCircularItemAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })_gridCoordinateForDescriptor:(id)arg1 atIndex:(long long)arg2;
- (struct { long long x1; long long x2; })_gridCoordinateForRectangularItemAtIndex:(long long)arg1;
- (struct { long long x1; long long x2; })_gridCoordinateForSystemSmallItemAtIndex:(long long)arg1;
- (struct CGPoint { double x1; double x2; })_originForGridCoordinate:(struct { long long x1; long long x2; })arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)computedAttributesByIndexPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (double)displayScale;
- (id)initWithDisplayScale:(double)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutDelegate;
- (void)prepareLayout;
- (void)setComputedAttributesByIndexPath:(id)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
