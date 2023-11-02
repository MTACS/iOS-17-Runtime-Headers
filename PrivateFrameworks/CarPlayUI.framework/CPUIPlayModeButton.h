
@interface CPUIPlayModeButton : CPUIMediaButton

- (id)colorForKnobContentSelected;
- (id)colorForKnobFocusLayerSelected;
- (id)colorForTouchContentSelected;
- (id)colorForTouchFocusLayer;
- (id)colorForTouchFocusLayerSelected;
- (bool)shouldUpdateButtonOpacityForKnobUnfocused;
- (bool)showBezelInTouch;
- (id)tintColorForUnhighlightedTextLabel;

@end
