
@interface _UIFluidSliderSettings : PTSettings {
    double  _defaultStretchAmount;
    _UIFluidSliderDiscreteButtonDriverSettings * _discreteButtonDriverSettings;
    _UIFluidSliderElasticPanDriverSettings * _elasticPanDriverSettings;
    _UISpringAnimationPrototypeSettings * _pressScale;
    _UISpringAnimationPrototypeSettings * _programmaticUpdate;
    double  _sliderDriftFactor;
    double  _sliderStepCount;
}

@property (nonatomic) double defaultStretchAmount;
@property (nonatomic, retain) _UIFluidSliderDiscreteButtonDriverSettings *discreteButtonDriverSettings;
@property (nonatomic, retain) _UIFluidSliderElasticPanDriverSettings *elasticPanDriverSettings;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *pressScale;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *programmaticUpdate;
@property (nonatomic) double sliderDriftFactor;
@property (nonatomic) double sliderStepCount;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)defaultStretchAmount;
- (id)discreteButtonDriverSettings;
- (id)elasticPanDriverSettings;
- (id)pressScale;
- (id)programmaticUpdate;
- (void)setDefaultStretchAmount:(double)arg1;
- (void)setDefaultValues;
- (void)setDiscreteButtonDriverSettings:(id)arg1;
- (void)setElasticPanDriverSettings:(id)arg1;
- (void)setPressScale:(id)arg1;
- (void)setProgrammaticUpdate:(id)arg1;
- (void)setSliderDriftFactor:(double)arg1;
- (void)setSliderStepCount:(double)arg1;
- (double)sliderDriftFactor;
- (double)sliderStepCount;

@end
