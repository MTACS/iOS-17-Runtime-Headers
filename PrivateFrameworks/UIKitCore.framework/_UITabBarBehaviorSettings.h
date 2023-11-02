
@interface _UITabBarBehaviorSettings : PTSettings {
    double  _inlineBottomInset;
    double  _inlineCornerRadius;
    double  _inlineHomeAffordanceVerticalOffset;
    double  _inlineHomeButtonVerticalOffset;
    double  _inlineLeadingPadding;
    double  _inlineTopInset;
    double  _inlineTrailingPadding;
    double  _stackedBottomInset;
    double  _stackedCornerRadius;
    double  _stackedLeadingPadding;
    double  _stackedTopInset;
    double  _stackedTrailingPadding;
}

@property (nonatomic) double inlineBottomInset;
@property (nonatomic) double inlineCornerRadius;
@property (nonatomic) double inlineHomeAffordanceVerticalOffset;
@property (nonatomic) double inlineHomeButtonVerticalOffset;
@property (nonatomic) double inlineLeadingPadding;
@property (nonatomic) double inlineTopInset;
@property (nonatomic) double inlineTrailingPadding;
@property (nonatomic) double stackedBottomInset;
@property (nonatomic) double stackedCornerRadius;
@property (nonatomic) double stackedLeadingPadding;
@property (nonatomic) double stackedTopInset;
@property (nonatomic) double stackedTrailingPadding;

+ (id)settingsControllerModule;

- (double)inlineBottomInset;
- (double)inlineCornerRadius;
- (double)inlineHomeAffordanceVerticalOffset;
- (double)inlineHomeButtonVerticalOffset;
- (double)inlineLeadingPadding;
- (double)inlineTopInset;
- (double)inlineTrailingPadding;
- (void)setDefaultValues;
- (void)setInlineBottomInset:(double)arg1;
- (void)setInlineCornerRadius:(double)arg1;
- (void)setInlineHomeAffordanceVerticalOffset:(double)arg1;
- (void)setInlineHomeButtonVerticalOffset:(double)arg1;
- (void)setInlineLeadingPadding:(double)arg1;
- (void)setInlineTopInset:(double)arg1;
- (void)setInlineTrailingPadding:(double)arg1;
- (void)setStackedBottomInset:(double)arg1;
- (void)setStackedCornerRadius:(double)arg1;
- (void)setStackedLeadingPadding:(double)arg1;
- (void)setStackedTopInset:(double)arg1;
- (void)setStackedTrailingPadding:(double)arg1;
- (double)stackedBottomInset;
- (double)stackedCornerRadius;
- (double)stackedLeadingPadding;
- (double)stackedTopInset;
- (double)stackedTrailingPadding;

@end
