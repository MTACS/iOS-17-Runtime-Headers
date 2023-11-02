
@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement {
    CALayer * _knobLayer;
    ICDocCamImageQuadEditOverlay * _overlayView;
}

@property (nonatomic) CALayer *knobLayer;
@property (nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (bool)accessibilityViewIsModal;
- (id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2;
- (bool)isAccessibilityElement;
- (id)knobLayer;
- (id)overlayView;
- (void)setKnobLayer:(id)arg1;
- (void)setOverlayView:(id)arg1;

@end
