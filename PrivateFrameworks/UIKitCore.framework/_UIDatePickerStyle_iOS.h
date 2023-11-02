
@interface _UIDatePickerStyle_iOS : _UIDatePickerStyle

- (void)addSubview:(id)arg1 toOverlayBackgroundView:(id)arg2;
- (double)compactDateLabelPlatterHorizontalPadding;
- (double)compactDateLabelPlatterVerticalPadding;
- (double)compactLabelCornerRadius;
- (id)createOverlayBackgroundView;
- (long long)datePickerModalPresentationStyle;
- (struct CGSize { double x1; double x2; })idealLayoutFittingSizeForDatePickerMode:(long long)arg1;
- (double)inlineDatePickerMaximumWidth;
- (double)inlineDatePickerMinimumMargin;
- (double)inlineDateViewMinimumWidth;
- (double)inlineTimeAndDateSpacing;
- (double)inlineTimeViewMinimumWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })maximumWidthOverhangForProposedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (double)overlayPlatterCornerRadius;
- (double)overlayPlatterDefaultMargin;
- (double)overlayPlatterDefaultSpacing;
- (double)overlayPlatterInitialHeight;
- (double)overlayPlatterInitialScale;
- (bool)overlayPlatterWantsShadowView;

@end
