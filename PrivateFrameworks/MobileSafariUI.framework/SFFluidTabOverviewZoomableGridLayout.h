
@interface SFFluidTabOverviewZoomableGridLayout : SFFluidTabOverviewGridLayout {
    NSIndexPath * _dataSourceZoomedItemIndexPath;
    double  _itemCornerRadius;
    double  _sectionHeaderFadeOutPoint;
}

@property (nonatomic) double itemCornerRadius;
@property (nonatomic) double sectionHeaderFadeOutPoint;
@property (nonatomic, retain) NSIndexPath *zoomedItemIndexPath;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)itemCornerRadius;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (double)sectionHeaderFadeOutPoint;
- (void)setItemCornerRadius:(double)arg1;
- (void)setSectionHeaderFadeOutPoint:(double)arg1;
- (void)setZoomedItemIndexPath:(id)arg1;
- (bool)shouldAllowScrollGesture;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)unzoomedLayoutAttributesForItemAtIndexPath:(id)arg1;
- (id)zoomedItemIndexPath;

@end
