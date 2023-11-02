
@interface PUCompositeVideoSettings : PXSettings {
    long long  _cropMode;
    double  _nonStitchingFadeDuration;
    double  _stitchingFadeDuration;
    bool  _useFrameBlending;
}

@property (nonatomic) long long cropMode;
@property (nonatomic) double nonStitchingFadeDuration;
@property (nonatomic) double stitchingFadeDuration;
@property (nonatomic) bool useFrameBlending;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)cropMode;
- (double)nonStitchingFadeDuration;
- (id)parentSettings;
- (void)setCropMode:(long long)arg1;
- (void)setDefaultValues;
- (void)setNonStitchingFadeDuration:(double)arg1;
- (void)setStitchingFadeDuration:(double)arg1;
- (void)setUseFrameBlending:(bool)arg1;
- (double)stitchingFadeDuration;
- (bool)useFrameBlending;

@end
