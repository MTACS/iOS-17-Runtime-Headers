
@interface CSCoverSheetFlyInSettings : PTSettings {
    bool  _animateIconsOnPresentationToo;
    double  _baselineDistance;
    bool  _centerFollowsFinger;
    double  _distanceExponent;
    double  _effectMultiplier;
    double  _iconsFlyInFriction;
    double  _iconsFlyInInteractiveDampingRatioMax;
    double  _iconsFlyInInteractiveDampingRatioMin;
    double  _iconsFlyInInteractiveResponseMax;
    double  _iconsFlyInInteractiveResponseMin;
    double  _iconsFlyInTension;
    double  _slomoRate;
}

@property (nonatomic) bool animateIconsOnPresentationToo;
@property (nonatomic) double baselineDistance;
@property (nonatomic) bool centerFollowsFinger;
@property (nonatomic) double distanceExponent;
@property (nonatomic) double effectMultiplier;
@property (nonatomic) double iconsFlyInFriction;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMax;
@property (nonatomic) double iconsFlyInInteractiveDampingRatioMin;
@property (nonatomic) double iconsFlyInInteractiveResponseMax;
@property (nonatomic) double iconsFlyInInteractiveResponseMin;
@property (nonatomic) double iconsFlyInTension;
@property (nonatomic) double slomoRate;

+ (id)settingsControllerModule;

- (bool)animateIconsOnPresentationToo;
- (double)baselineDistance;
- (bool)centerFollowsFinger;
- (double)distanceExponent;
- (double)effectMultiplier;
- (double)iconsFlyInFriction;
- (double)iconsFlyInInteractiveDampingRatioMax;
- (double)iconsFlyInInteractiveDampingRatioMin;
- (double)iconsFlyInInteractiveResponseMax;
- (double)iconsFlyInInteractiveResponseMin;
- (double)iconsFlyInTension;
- (void)setAnimateIconsOnPresentationToo:(bool)arg1;
- (void)setBaselineDistance:(double)arg1;
- (void)setCenterFollowsFinger:(bool)arg1;
- (void)setDefaultValues;
- (void)setDistanceExponent:(double)arg1;
- (void)setEffectMultiplier:(double)arg1;
- (void)setIconsFlyInFriction:(double)arg1;
- (void)setIconsFlyInInteractiveDampingRatioMax:(double)arg1;
- (void)setIconsFlyInInteractiveDampingRatioMin:(double)arg1;
- (void)setIconsFlyInInteractiveResponseMax:(double)arg1;
- (void)setIconsFlyInInteractiveResponseMin:(double)arg1;
- (void)setIconsFlyInTension:(double)arg1;
- (void)setSlomoRate:(double)arg1;
- (double)slomoRate;

@end
