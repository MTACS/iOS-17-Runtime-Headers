
@interface ASVWorldGestureRecognizer : ASVUnifiedGestureRecognizer <ASVWorldSingleFingerGestureDelegate, ASVWorldTwoFingerGestureDelegate> {
    void _lastTranslationLocation;
    double  _lastTranslationTime;
    void _normalizedVelocity;
    NSSet * _snapScalesSet;
    ASVDeceleration * _translationDeceleration;
    ASVVelocitySample3D * _translationLastVelocitySample;
    ASVVelocitySample3D * _translationVelocitySample;
    <ASVWorldGestureRecognizerDelegate> * _worldDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void lastTranslationLocation;
@property (nonatomic) double lastTranslationTime;
@property (nonatomic, readonly) float maximumObjectScale;
@property (nonatomic, readonly) float minimumObjectScale;
@property (nonatomic) void normalizedVelocity;
@property (nonatomic, retain) NSSet *snapScalesSet;
@property (readonly) Class superclass;
@property (nonatomic, retain) ASVDeceleration *translationDeceleration;
@property (nonatomic, retain) ASVVelocitySample3D *translationLastVelocitySample;
@property (nonatomic, retain) ASVVelocitySample3D *translationVelocitySample;
@property (nonatomic) <ASVWorldGestureRecognizerDelegate> *worldDelegate;

- (void).cxx_destruct;
- (void)cancelDeceleration;
- (float)clampedScaleForScale:(float)arg1;
- (void)gesture:(void *)arg1 levitatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (void)gesture:(void *)arg1 translatedAssetToScreenPoint:(void *)arg2; // needs 2 arg types, found 1: id
- (void)gestureBeganLevitation:(id)arg1;
- (void)gestureBeganTranslation:(id)arg1;
- (void)gestureEndedLevitation:(id)arg1;
- (void)gestureEndedTranslation:(id)arg1;
- (id)initWithWorldDelegate:(id)arg1 feedbackGenerator:(id)arg2;
- (bool)isActive;
- (bool)isDecelerating;
- (void)lastTranslationLocation;
- (double)lastTranslationTime;
- (float)maximumObjectScale;
- (float)minimumObjectScale;
- (void)normalizedVelocity;
- (void)setEnabledGestureTypes:(unsigned long long)arg1;
- (void)setLastTranslationLocation;
- (void)setLastTranslationTime:(double)arg1;
- (void)setNormalizedVelocity;
- (void)setSnapScalesSet:(id)arg1;
- (void)setTranslationDeceleration:(id)arg1;
- (void)setTranslationLastVelocitySample:(id)arg1;
- (void)setTranslationVelocitySample:(id)arg1;
- (void)setWorldDelegate:(id)arg1;
- (id)singleFingerGestureForTouch:(id)arg1 dataSource:(id)arg2 enabledGestureTypes:(unsigned long long)arg3;
- (id)snapScalesSet;
- (void)startTranslationDecelerationWithInitialVelocity;
- (id)translationDeceleration;
- (id)translationLastVelocitySample;
- (id)translationVelocitySample;
- (id)twoFingerGestureForFirstTouch:(id)arg1 secondTouch:(id)arg2 dataSource:(id)arg3;
- (void)update;
- (void)updateDecelerationTranslation;
- (id)worldDelegate;

@end
