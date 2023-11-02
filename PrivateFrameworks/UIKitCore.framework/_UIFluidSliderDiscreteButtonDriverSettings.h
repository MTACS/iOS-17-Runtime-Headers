
@interface _UIFluidSliderDiscreteButtonDriverSettings : _UIFluidSliderDriverSettings {
    double  _horizontalVolumeDownScale;
    double  _horizontalVolumeUpScale;
    double  _minimumPressDuration;
    double  _repeatCadence;
    double  _repeatDelay;
    _UISpringAnimationPrototypeSettings * _settle;
    double  _verticalVolumeDownScale;
    double  _verticalVolumeUpScale;
}

@property (nonatomic) double horizontalVolumeDownScale;
@property (nonatomic) double horizontalVolumeUpScale;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double repeatCadence;
@property (nonatomic) double repeatDelay;
@property (nonatomic, retain) _UISpringAnimationPrototypeSettings *settle;
@property (nonatomic) double verticalVolumeDownScale;
@property (nonatomic) double verticalVolumeUpScale;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)horizontalVolumeDownScale;
- (double)horizontalVolumeUpScale;
- (double)minimumPressDuration;
- (double)repeatCadence;
- (double)repeatDelay;
- (void)setDefaultValues;
- (void)setHorizontalVolumeDownScale:(double)arg1;
- (void)setHorizontalVolumeUpScale:(double)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setRepeatCadence:(double)arg1;
- (void)setRepeatDelay:(double)arg1;
- (void)setSettle:(id)arg1;
- (void)setVerticalVolumeDownScale:(double)arg1;
- (void)setVerticalVolumeUpScale:(double)arg1;
- (id)settle;
- (double)verticalVolumeDownScale;
- (double)verticalVolumeUpScale;

@end
