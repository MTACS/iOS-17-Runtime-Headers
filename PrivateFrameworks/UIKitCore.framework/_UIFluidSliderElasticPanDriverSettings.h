
@interface _UIFluidSliderElasticPanDriverSettings : _UIFluidSliderDriverSettings {
    double  _projectionThreshold;
}

@property (nonatomic) double projectionThreshold;

+ (id)settingsControllerModule;

- (double)projectionThreshold;
- (void)setDefaultValues;
- (void)setProjectionThreshold:(double)arg1;

@end
