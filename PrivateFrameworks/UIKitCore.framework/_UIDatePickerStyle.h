
@interface _UIDatePickerStyle : NSObject

@property (nonatomic, readonly) double compactDateLabelPlatterHorizontalPadding;
@property (nonatomic, readonly) double compactDateLabelPlatterVerticalPadding;
@property (nonatomic, readonly) double compactLabelCornerRadius;
@property (nonatomic, readonly) long long datePickerModalPresentationStyle;
@property (nonatomic, readonly) double horizontalDatePadding;
@property (nonatomic, readonly) double horizontalPaddingForAMPM;
@property (nonatomic, readonly) double horizontalTimeColumnPadding;
@property (nonatomic, readonly) double horizontalWeekMonthDayPadding;
@property (nonatomic, readonly) double horizontalWeekdayTimePadding;
@property (nonatomic, readonly) double inlineDatePickerMaximumWidth;
@property (nonatomic, readonly) double inlineDatePickerMinimumMargin;
@property (nonatomic, readonly) double inlineDateViewMinimumWidth;
@property (nonatomic, readonly) double inlineTimeAndDateSpacing;
@property (nonatomic, readonly) double inlineTimeViewMinimumWidth;
@property (nonatomic, readonly) double overlayPlatterCornerRadius;
@property (nonatomic, readonly) double overlayPlatterDefaultMargin;
@property (nonatomic, readonly) double overlayPlatterDefaultSpacing;
@property (nonatomic, readonly) double overlayPlatterInitialHeight;
@property (nonatomic, readonly) double overlayPlatterInitialScale;
@property (nonatomic, readonly) bool overlayPlatterWantsShadowView;

- (void)addSubview:(id)arg1 toOverlayBackgroundView:(id)arg2;
- (double)compactDateLabelPlatterHorizontalPadding;
- (double)compactDateLabelPlatterVerticalPadding;
- (double)compactLabelCornerRadius;
- (id)createOverlayBackgroundView;
- (long long)datePickerModalPresentationStyle;
- (double)horizontalDatePadding;
- (double)horizontalPaddingForAMPM;
- (double)horizontalTimeColumnPadding;
- (double)horizontalWeekMonthDayPadding;
- (double)horizontalWeekdayTimePadding;
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
