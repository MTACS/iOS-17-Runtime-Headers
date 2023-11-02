
@protocol _UIFocusItemInternal <UIFocusItem, _UIFocusEnvironmentInternal>

@optional

- (bool)_drawsFocusRingWhenChildrenFocused;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_focusCastingFrameForHeading:(unsigned long long)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (long long)_focusTouchSensitivityStyle;
- (unsigned long long)_insertionIndexOfFocusLayerInView;
- (long long)_systemDefaultFocusGroupPriority;
- (UIView *)_viewToAddFocusLayer;
- (bool)_wantsKeyCommandsWhenDeferred;

@end
