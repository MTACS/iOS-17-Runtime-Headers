
@interface SBHIconAnimationSettings : PTSettings {
    SBFAnimationSettings * _centralAnimationSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *centralAnimationSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)centralAnimationSettings;
- (void)setCentralAnimationSettings:(id)arg1;
- (void)setDefaultValues;

@end
