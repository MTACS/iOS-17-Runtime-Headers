
@interface AXFKAFocusDoubleRingShapeLayer : AXFKAFocusRingShapeLayer {
    AXFKAFocusRingBorderShapeLayer * _topBorderLayer;
}

@property (nonatomic, retain) AXFKAFocusRingBorderShapeLayer *topBorderLayer;

- (void).cxx_destruct;
- (void)_updateTopLayerPath;
- (id)init;
- (double)lineWidthForTopLayer;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setTopBorderLayer:(id)arg1;
- (struct CGColor { }*)strokeColorForTopLayer;
- (id)topBorderLayer;
- (id)topLayerFocusRingColorForTintColor:(id)arg1;
- (void)updateAppearance;

@end
