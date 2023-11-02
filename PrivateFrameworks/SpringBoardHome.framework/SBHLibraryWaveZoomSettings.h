
@interface SBHLibraryWaveZoomSettings : SBHIconZoomSettings {
    double  _interPodWaveDelay;
    SBFAnimationSettings * _podFadeSettings;
    double  _podRelativeFadeDelay;
    double  _relativeBackgroundDuration;
    double  _relativeSearchDuration;
    SBHInterpolationSettings * _retargetedBasicDurationSettings;
    SBHInterpolationSettings * _retargetedInitialVelocitySettings;
    SBHInterpolationSettings * _retargetedMassSettings;
    SBHInterpolationSettings * _retargetedStiffnessSettings;
    double  _searchScale;
    double  _upperPodRelativeCrossfadeDuration;
    double  _upperPodRelativeStackAlphaDuration;
    PTPointSettings * _zEffectControlPoint1Settings;
    PTPointSettings * _zEffectControlPoint2Settings;
}

@property (nonatomic) double interPodWaveDelay;
@property (nonatomic, retain) SBFAnimationSettings *podFadeSettings;
@property (nonatomic) double podRelativeFadeDelay;
@property (nonatomic) double relativeBackgroundDuration;
@property (nonatomic) double relativeSearchDuration;
@property (nonatomic, retain) SBHInterpolationSettings *retargetedBasicDurationSettings;
@property (nonatomic, retain) SBHInterpolationSettings *retargetedInitialVelocitySettings;
@property (nonatomic, retain) SBHInterpolationSettings *retargetedMassSettings;
@property (nonatomic, retain) SBHInterpolationSettings *retargetedStiffnessSettings;
@property (nonatomic) double searchScale;
@property (nonatomic) double upperPodRelativeCrossfadeDuration;
@property (nonatomic) double upperPodRelativeStackAlphaDuration;
@property (nonatomic, retain) PTPointSettings *zEffectControlPoint1Settings;
@property (nonatomic, retain) PTPointSettings *zEffectControlPoint2Settings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (double)interPodWaveDelay;
- (id)podFadeSettings;
- (double)podRelativeFadeDelay;
- (double)relativeBackgroundDuration;
- (double)relativeSearchDuration;
- (id)retargetedBasicDurationSettings;
- (id)retargetedInitialVelocitySettings;
- (id)retargetedMassSettings;
- (id)retargetedStiffnessSettings;
- (double)searchScale;
- (void)setDefaultValues;
- (void)setInterPodWaveDelay:(double)arg1;
- (void)setPodFadeSettings:(id)arg1;
- (void)setPodRelativeFadeDelay:(double)arg1;
- (void)setRelativeBackgroundDuration:(double)arg1;
- (void)setRelativeSearchDuration:(double)arg1;
- (void)setRetargetedBasicDurationSettings:(id)arg1;
- (void)setRetargetedInitialVelocitySettings:(id)arg1;
- (void)setRetargetedMassSettings:(id)arg1;
- (void)setRetargetedStiffnessSettings:(id)arg1;
- (void)setSearchScale:(double)arg1;
- (void)setUpperPodRelativeCrossfadeDuration:(double)arg1;
- (void)setUpperPodRelativeStackAlphaDuration:(double)arg1;
- (void)setZEffectControlPoint1Settings:(id)arg1;
- (void)setZEffectControlPoint2Settings:(id)arg1;
- (double)upperPodRelativeCrossfadeDuration;
- (double)upperPodRelativeStackAlphaDuration;
- (id)zEffectControlPoint1Settings;
- (id)zEffectControlPoint2Settings;

@end
