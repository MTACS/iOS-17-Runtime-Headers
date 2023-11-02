
@interface AXRVoiceOverTouchPadView : UIView {
    <AXRVoiceOverTouchPadViewDelegate> * _delegate;
}

@property (nonatomic) <AXRVoiceOverTouchPadViewDelegate> *delegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_accessibilityGesturePracticeRegion;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)delegate;
- (bool)isAccessibilityElement;
- (void)setDelegate:(id)arg1;

@end
