
@interface HUITitleDarkStepSliderView : UIView {
    HUISliderConfig * _config;
    HUIStepSlider * _slider;
    _HUIDarkStepSliderView * _sliderView;
    HACCStackView * _stackView;
    UILabel * _titleLabel;
    HACCCapsuleTitleView * _titleView;
    NSLayoutConstraint * _titleViewHeightLayout;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) HUISliderConfig *config;
@property (nonatomic, retain) HUIStepSlider *slider;
@property (nonatomic, retain) _HUIDarkStepSliderView *sliderView;
@property (nonatomic, retain) HACCStackView *stackView;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) HACCCapsuleTitleView *titleView;
@property (nonatomic, retain) NSLayoutConstraint *titleViewHeightLayout;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_setupTitleView;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)config;
- (id)initWithConfig:(id)arg1;
- (bool)isAccessibilityElement;
- (void)setConfig:(id)arg1;
- (void)setIsLargeText:(bool)arg1;
- (void)setIsSubmenu:(bool)arg1;
- (void)setSlider:(id)arg1;
- (void)setSliderView:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setTitleViewHeightLayout:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (id)slider;
- (id)sliderView;
- (id)stackView;
- (id)titleLabel;
- (id)titleView;
- (id)titleViewHeightLayout;
- (id)valueLabel;

@end
