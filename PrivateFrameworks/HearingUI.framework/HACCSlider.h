
@interface HACCSlider : UIControl <HACCContentModule> {
    NSNumberFormatter * _numberFormatter;
    unsigned long long  _numberOfSteps;
    HUITitleDarkStepSliderView * _sliderView;
    double  _value;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long module;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic, retain) HUITitleDarkStepSliderView *sliderView;
@property (readonly) Class superclass;
@property (nonatomic) double value;

- (void).cxx_destruct;
- (bool)_isSubModule;
- (id)_sliderConfig;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)initWithModule:(unsigned long long)arg1 andDelegate:(id)arg2;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (unsigned long long)module;
- (id)numberFormatter;
- (unsigned long long)numberOfSteps;
- (bool)providesOwnSeparator;
- (void)setDelegate:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setNumberOfSteps:(unsigned long long)arg1;
- (void)setSliderView:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 andNotify:(bool)arg2;
- (void)sliderDidChange:(id)arg1;
- (id)sliderView;
- (void)updateValue;
- (void)updateValueString;
- (double)value;

@end
