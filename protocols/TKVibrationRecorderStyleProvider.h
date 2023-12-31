
@protocol TKVibrationRecorderStyleProvider <NSObject>

@required

- (UIScreen *)screen;
- (void)setScreen:(UIScreen *)arg1;
- (UIColor *)vibrationRecorderBarsBackgroundColor;
- (double)vibrationRecorderControlsToolbarAdditionalHeight;
- (double)vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
- (double)vibrationRecorderControlsToolbarVerticalOffset;
- (UIColor *)vibrationRecorderInstructionsLabelBackgroundColor;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })vibrationRecorderInstructionsLabelEdgeInsets;
- (double)vibrationRecorderInstructionsLabelFadeAnimationDuration;
- (UIFont *)vibrationRecorderInstructionsLabelFont;
- (struct UIOffset { double x1; double x2; })vibrationRecorderInstructionsLabelPositionOffset;
- (UIColor *)vibrationRecorderInstructionsLabelTextColor;
- (double)vibrationRecorderProgressToolbarAdditionalHeight;
- (double)vibrationRecorderProgressToolbarVerticalOffset;
- (double)vibrationRecorderProgressViewAccessibilityAdditionalHeight;
- (double)vibrationRecorderProgressViewDotHorizontalInset;
- (UIColor *)vibrationRecorderProgressViewDotTintColor;
- (double)vibrationRecorderProgressViewHeight;
- (double)vibrationRecorderProgressViewHorizontalOffsetFromEdge;
- (UIImage *)vibrationRecorderProgressViewResizableDotImage;
- (UIColor *)vibrationRecorderProgressViewTrackColor;
- (double)vibrationRecorderRippleFinalRadius;
- (double)vibrationRecorderRippleFingerMovingSpeed;
- (double)vibrationRecorderRippleFingerStillSpeed;
- (double)vibrationRecorderRippleInitialRadius;
- (double)vibrationRecorderRippleRingLineWidth;
- (UIColor *)vibrationRecorderRippleViewBackgroundColor;

@end
