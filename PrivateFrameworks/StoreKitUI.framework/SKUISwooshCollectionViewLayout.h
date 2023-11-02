
@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout {
    UIColor * _backgroundColor;
    bool  _snapsToItemBoundaries;
    bool  _snapsToItemCenters;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic) bool snapsToItemBoundaries;
@property (nonatomic) bool snapsToItemCenters;

+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setSnapsToItemBoundaries:(bool)arg1;
- (void)setSnapsToItemCenters:(bool)arg1;
- (bool)snapsToItemBoundaries;
- (bool)snapsToItemCenters;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;

@end