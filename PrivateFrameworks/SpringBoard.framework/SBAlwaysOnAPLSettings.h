
@interface SBAlwaysOnAPLSettings : PTSettings {
    double  _overallAPLLimit;
}

@property (nonatomic) double overallAPLLimit;

+ (id)settingsControllerModule;

- (double)overallAPLLimit;
- (void)setDefaultValues;
- (void)setOverallAPLLimit:(double)arg1;

@end
