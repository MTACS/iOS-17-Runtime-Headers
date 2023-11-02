
@interface CPUIMediaButton : UIButton {
    CALayer * _focusColorLayer;
    NSUUID * _identifier;
    bool  _showBezelInTouch;
    bool  _showHighlight;
}

@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) bool showBezelInTouch;
@property (nonatomic) bool showHighlight;

- (void).cxx_destruct;
- (id)_buttonBackGroundColorTouch;
- (void)_updateButtonStyle;
- (bool)canBecomeFocused;
- (bool)canShowHighlight;
- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayer;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForKnobFocused;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchFocusLayerSelected;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (double)focusLayerCornerRadius;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHidden:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShowBezelInTouch:(bool)arg1;
- (void)setShowHighlight:(bool)arg1;
- (bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (bool)showBezelInTouch;
- (bool)showHighlight;
- (id)tintColorForUnhighlightedTextLabel;
- (void)updateButtonOpacityForKnobUnfocused;
- (void)willMoveToWindow:(id)arg1;

@end
