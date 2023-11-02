
@interface HACCPSESettings : UIView <HACCContentModule, MTVisualStylingRequiring> {
    HUITitleDarkStepSliderView * _amplificationSlider;
    HUITitleDarkStepSliderView * _balanceSlider;
    bool  _didSetVibrancy;
    HUITitleDarkStepSliderView * _noiseSupressorSlider;
    NSNumberFormatter * _numberFormatter;
    HACCStackView * _stackView;
    HUITitleDarkStepSliderView * _toneSlider;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (nonatomic, retain) HUITitleDarkStepSliderView *amplificationSlider;
@property (nonatomic, retain) HUITitleDarkStepSliderView *balanceSlider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long module;
@property (nonatomic, retain) HUITitleDarkStepSliderView *noiseSupressorSlider;
@property (nonatomic, retain) NSNumberFormatter *numberFormatter;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) HACCStackView *stackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUITitleDarkStepSliderView *toneSlider;

- (void).cxx_destruct;
- (id)amplificationSlider;
- (void)amplificationSliderDidChange:(id)arg1;
- (id)balanceSlider;
- (void)balanceSliderDidChange:(id)arg1;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)module;
- (void)noiseSliderDidChange:(id)arg1;
- (id)noiseSupressorSlider;
- (id)numberFormatter;
- (id)requiredVisualStyleCategories;
- (void)setAmplificationSlider:(id)arg1;
- (void)setBalanceSlider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setNoiseSupressorSlider:(id)arg1;
- (void)setNumberFormatter:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setToneSlider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)stackView;
- (id)toneSlider;
- (void)toneSliderDidChange:(id)arg1;
- (void)updateAccessibilityBalanceValue;
- (void)updateAccessibilityToneValue;
- (void)updateValue;

@end
