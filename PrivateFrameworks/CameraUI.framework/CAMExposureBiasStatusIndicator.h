
@interface CAMExposureBiasStatusIndicator : CAMControlStatusIndicator {
    UILabel * __exposureLabel;
    UIView * __highlightClippingTick;
    UIView * __shadowClippingTick;
    CAMExposureBiasStatusIndicatorTickMarksView * __ticksView;
    double  _exposureBiasValue;
    bool  _exposureValueVisible;
    double  _highlightClipping;
    double  _shadowClipping;
}

@property (nonatomic, readonly) UILabel *_exposureLabel;
@property (nonatomic, readonly) UIView *_highlightClippingTick;
@property (nonatomic, readonly) UIView *_shadowClippingTick;
@property (nonatomic, readonly) CAMExposureBiasStatusIndicatorTickMarksView *_ticksView;
@property (nonatomic) double exposureBiasValue;
@property (getter=isExposureValueVisible, nonatomic) bool exposureValueVisible;
@property (nonatomic) double highlightClipping;
@property (nonatomic) double shadowClipping;

- (void).cxx_destruct;
- (double)_clippingTickAlphaForClipping:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_clippingTickFrameForClipping:(double)arg1 leftAligned:(bool)arg2;
- (id)_exposureLabel;
- (id)_highlightClippingTick;
- (double)_horizontalExposureLabelOffset;
- (void)_layoutHighlightClippingTick;
- (void)_layoutShadowClippingTick;
- (id)_shadowClippingTick;
- (id)_ticksView;
- (void)_updateExposureLabel;
- (void)_updateHighlightClippingTickAlpha;
- (void)_updateShadowClippingTickAlpha;
- (void)_updateTicks;
- (double)exposureBiasValue;
- (double)highlightClipping;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isExposureValueVisible;
- (void)layoutSubviews;
- (void)setExposureBiasValue:(double)arg1;
- (void)setExposureValueVisible:(bool)arg1;
- (void)setHighlightClipping:(double)arg1;
- (void)setShadowClipping:(double)arg1;
- (double)shadowClipping;
- (bool)shouldUseOutline;
- (bool)supportsOrientations;

@end
