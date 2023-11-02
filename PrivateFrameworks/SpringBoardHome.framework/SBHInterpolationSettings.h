
@interface SBHInterpolationSettings : PTSettings {
    double  _lowerBoundFactor;
    double  _upperBoundFactor;
}

@property (nonatomic) double lowerBoundFactor;
@property (nonatomic) double upperBoundFactor;

+ (id)settingsControllerModule;

- (double)lowerBoundFactor;
- (void)setDefaultValues;
- (void)setLowerBoundFactor:(double)arg1;
- (void)setUpperBoundFactor:(double)arg1;
- (double)upperBoundFactor;

@end
