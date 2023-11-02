
@interface SBHDisplaySettings : PTSettings {
    double  _additionalTopSafeAreaInset;
}

@property (nonatomic) double additionalTopSafeAreaInset;

+ (id)settingsControllerModule;

- (double)additionalTopSafeAreaInset;
- (void)setAdditionalTopSafeAreaInset:(double)arg1;
- (void)setDefaultValues;

@end
