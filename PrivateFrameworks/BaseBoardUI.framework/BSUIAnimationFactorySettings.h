
@interface BSUIAnimationFactorySettings : PTSettings {
    bool  _slowAnimations;
    double  _slowDownFactor;
}

@property (nonatomic) bool slowAnimations;
@property (nonatomic) double slowDownFactor;

+ (id)settingsControllerModule;

- (double)effectiveSlowDownFactor;
- (void)setDefaultValues;
- (void)setSlowAnimations:(bool)arg1;
- (void)setSlowDownFactor:(double)arg1;
- (bool)slowAnimations;
- (double)slowDownFactor;

@end
