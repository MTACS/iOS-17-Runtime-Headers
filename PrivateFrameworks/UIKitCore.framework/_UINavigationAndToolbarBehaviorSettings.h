
@interface _UINavigationAndToolbarBehaviorSettings : PTSettings {
    double  _backButtonLeadingPadding;
    double  _backButtonTrailingPadding;
    double  _buttonCornerRadius;
    double  _buttonHorizontalOffset;
    double  _buttonMinimumDistanceFromEdge;
    double  _buttonMinimumHeight;
    double  _buttonMinimumWidth;
    double  _buttonPadding;
    double  _buttonVerticalOffset;
    bool  _enableClippingBehavior;
    bool  _enableLiftOnSelected;
}

@property (nonatomic) double backButtonLeadingPadding;
@property (nonatomic) double backButtonTrailingPadding;
@property (nonatomic) double buttonCornerRadius;
@property (nonatomic) double buttonHorizontalOffset;
@property (nonatomic) double buttonMinimumDistanceFromEdge;
@property (nonatomic) double buttonMinimumHeight;
@property (nonatomic) double buttonMinimumWidth;
@property (nonatomic) double buttonPadding;
@property (nonatomic) double buttonVerticalOffset;
@property (nonatomic) bool enableClippingBehavior;
@property (nonatomic) bool enableLiftOnSelected;

+ (id)settingsControllerModule;

- (double)backButtonLeadingPadding;
- (double)backButtonTrailingPadding;
- (double)buttonCornerRadius;
- (double)buttonHorizontalOffset;
- (double)buttonMinimumDistanceFromEdge;
- (double)buttonMinimumHeight;
- (double)buttonMinimumWidth;
- (double)buttonPadding;
- (double)buttonVerticalOffset;
- (bool)enableClippingBehavior;
- (bool)enableLiftOnSelected;
- (void)setBackButtonLeadingPadding:(double)arg1;
- (void)setBackButtonTrailingPadding:(double)arg1;
- (void)setButtonCornerRadius:(double)arg1;
- (void)setButtonHorizontalOffset:(double)arg1;
- (void)setButtonMinimumDistanceFromEdge:(double)arg1;
- (void)setButtonMinimumHeight:(double)arg1;
- (void)setButtonMinimumWidth:(double)arg1;
- (void)setButtonPadding:(double)arg1;
- (void)setButtonVerticalOffset:(double)arg1;
- (void)setDefaultValues;
- (void)setEnableClippingBehavior:(bool)arg1;
- (void)setEnableLiftOnSelected:(bool)arg1;

@end
