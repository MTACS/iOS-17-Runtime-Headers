
@interface PKSelectionModificationKnob : CALayer {
    bool  _isBrushSelecting;
    bool  _isRTL;
    struct CGColor { } * _knobColor;
    CALayer * _knobLayer;
    long long  _knobLocation;
    CALayer * _knobTailLayer;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (void)dealloc;
- (bool)isAccessibilityElement;
- (void)layoutSublayers;

@end
