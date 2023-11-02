
@interface _HUIDarkStepSliderView : UIView {
    HUISliderConfig * _config;
    HACCCapsuleDarkBackground * _darkBackgroundView;
    NSArray * _defaultLayouts;
    NSArray * _largeTextLayouts;
    UIView * _leadingView;
    HUIStepSlider * _slider;
    UIView * _trailingView;
}

@property (nonatomic, retain) HUISliderConfig *config;
@property (nonatomic, retain) HACCCapsuleDarkBackground *darkBackgroundView;
@property (nonatomic, retain) NSArray *defaultLayouts;
@property (nonatomic, retain) NSArray *largeTextLayouts;
@property (nonatomic, retain) UIView *leadingView;
@property (nonatomic, retain) HUIStepSlider *slider;
@property (nonatomic, retain) UIView *trailingView;

- (void).cxx_destruct;
- (void)_setContraintsFromConfig:(id)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)config;
- (id)darkBackgroundView;
- (id)defaultLayouts;
- (id)initWithConfig:(id)arg1;
- (id)largeTextLayouts;
- (id)leadingView;
- (void)setConfig:(id)arg1;
- (void)setDarkBackgroundView:(id)arg1;
- (void)setDefaultLayouts:(id)arg1;
- (void)setLargeTextLayouts:(id)arg1;
- (void)setLeadingView:(id)arg1;
- (void)setSlider:(id)arg1;
- (void)setTrailingView:(id)arg1;
- (id)slider;
- (id)trailingView;
- (void)updateConstraintsWithConfig:(id)arg1;

@end
