
@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout {
    bool  _enableEdgeDisappearing;
    UICollectionViewLayoutAttributes * _fixedHeaderLayoutAttributes;
    bool  _pinHeaderToVisible;
}

@property (nonatomic) bool enableEdgeDisappearing;
@property (nonatomic, retain) UICollectionViewLayoutAttributes *fixedHeaderLayoutAttributes;
@property (nonatomic) bool pinHeaderToVisible;

- (void).cxx_destruct;
- (bool)enableEdgeDisappearing;
- (id)fixedHeaderLayoutAttributes;
- (bool)isRTL;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)modifyLayoutAttributes:(id)arg1;
- (bool)pinHeaderToVisible;
- (void)prepareLayout;
- (void)setEnableEdgeDisappearing:(bool)arg1;
- (void)setFixedHeaderLayoutAttributes:(id)arg1;
- (void)setPinHeaderToVisible:(bool)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
