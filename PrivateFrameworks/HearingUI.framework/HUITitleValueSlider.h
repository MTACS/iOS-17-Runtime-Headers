
@interface HUITitleValueSlider : UIView {
    UIVisualEffectView * _effectView;
    HUIStepSlider * _slider;
    UILabel * _titleLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) UIVisualEffectView *effectView;
@property (nonatomic, retain) HUIStepSlider *slider;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (id)_accessibilityUserTestingChildren;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)effectView;
- (id)initWithEffect:(id)arg1;
- (bool)isAccessibilityElement;
- (void)setEffectView:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (id)slider;
- (id)titleLabel;
- (id)valueLabel;

@end
