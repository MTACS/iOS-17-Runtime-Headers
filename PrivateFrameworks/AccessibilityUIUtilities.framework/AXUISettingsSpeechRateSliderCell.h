
@interface AXUISettingsSpeechRateSliderCell : PSTableCell {
    NSArray * _buttonConstraints;
    NSNumber * _defaultValue;
    NSArray * _extraLargeTextButtonConstraints;
    UIButton * _fastButton;
    UIImpactFeedbackGenerator * _hapticGenerator;
    bool  _hapticPlayedValue;
    NSArray * _largeTextButtonConstraints;
    bool  _playedFastBounce;
    bool  _playedSlowBounce;
    UISlider * _sliderView;
    UIButton * _slowButton;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSArray *buttonConstraints;
@property (nonatomic, retain) NSNumber *defaultValue;
@property (nonatomic, retain) NSArray *extraLargeTextButtonConstraints;
@property (nonatomic, retain) UIButton *fastButton;
@property (nonatomic, retain) NSArray *largeTextButtonConstraints;
@property (nonatomic, retain) UISlider *sliderView;
@property (nonatomic, retain) UIButton *slowButton;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (bool)_accessibilityIgnoreInternalLabels;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_changeSpeechRateFromButton:(bool)arg1;
- (void)_changeValueBySpeechRateIncrementWithSnapToDefault:(double)arg1 snapThreshold:(double)arg2;
- (void)_updateAccessibilityValueBlock;
- (void)_updateButtonShapes;
- (void)_updateTextSizeLayout;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)applyHapticIfNecessary:(id)arg1;
- (id)buttonConstraints;
- (id)defaultValue;
- (double)displayValue;
- (id)extraLargeTextButtonConstraints;
- (id)fastButton;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (bool)isAccessibilityElement;
- (id)labelColor;
- (id)largeTextButtonConstraints;
- (void)layoutSubviews;
- (id)newControl;
- (void)setButtonConstraints:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setExtraLargeTextButtonConstraints:(id)arg1;
- (void)setFastButton:(id)arg1;
- (void)setLargeTextButtonConstraints:(id)arg1;
- (void)setSliderView:(id)arg1;
- (void)setSlowButton:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (Class)sliderCellClass;
- (id)sliderView;
- (id)slowButton;
- (void)updateValue;
- (void)userSelectedValue;
- (id)valueLabel;

@end
