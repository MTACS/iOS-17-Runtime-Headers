
@interface ARUIRingGroup : NSObject <ARUIAnimationObserver, NSCopying> {
    <ARUIAnimationSequencing> * _animationSequencer;
    NSMutableDictionary * _animations;
    <ARUIRingGroupDelegate> * _delegate;
    float  _emptyOpacity;
    float  _groupDiameter;
    float  _interspacing;
    bool  _observingSequencing;
    float  _opacity;
    bool  _paused;
    long long  _ringType;
    NSArray * _rings;
    float  _scale;
    ARUISpriteSheet * _spriteSheet;
    float  _thickness;
    float  _trackOpacity;
    void _translation;
    float  _zRotation;
}

@property (nonatomic, readonly) bool animating;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ARUIRingGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float emptyOpacity;
@property (nonatomic, readonly) ARUIRingGroup *forCompanion;
@property (nonatomic, readonly) ARUIRingGroup *forWatch;
@property (nonatomic) float groupDiameter;
@property (readonly) unsigned long long hash;
@property (nonatomic) float interspacing;
@property (nonatomic) float opacity;
@property (nonatomic) bool paused;
@property (nonatomic) long long ringType;
@property (nonatomic, readonly) NSArray *rings;
@property (nonatomic) float scale;
@property (nonatomic, readonly) ARUISpriteSheet *spriteSheet;
@property (readonly) Class superclass;
@property (nonatomic) float thickness;
@property (nonatomic) float trackOpacity;
@property (nonatomic) void translation;
@property (nonatomic, readonly) ARUIRingGroup *withSpriteSheet;
@property (nonatomic, readonly) ARUIRingGroup *withWheelchairSpriteSheet;
@property (nonatomic) float zRotation;

// Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI

+ (unsigned long long)_numberOfRingsForRingType:(long long)arg1;
+ (id)_timingFunctionForCurve:(unsigned long long)arg1;
+ (id)activityRingGroup;
+ (id)activityRingGroupForRingType:(long long)arg1;
+ (void)animateUsingSpringWithTension:(double)arg1 friction:(double)arg2 animations:(id /* block */)arg3;
+ (void)animateUsingSpringWithTension:(double)arg1 friction:(double)arg2 animations:(id /* block */)arg3 completion:(id /* block */)arg4;
+ (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2;
+ (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)animateWithDuration:(double)arg1 animations:(id /* block */)arg2 curve:(unsigned long long)arg3 completion:(id /* block */)arg4;
+ (id)countdownRingGroup;
+ (id)countdownRingGroupOnCompanion;

- (void).cxx_destruct;
- (double)_adjustedDurationForRingWithIndex:(long long)arg1 startPercentage:(float)arg2 targetPercentage:(float)arg3 defaultDuration:(double)arg4;
- (void)_positionSprites;
- (void)_removeAnimationForKey:(id)arg1;
- (float)_ringPercentageAdjustedForProximityToFull:(float)arg1 withRingDiameter:(float)arg2 thickness:(float)arg3;
- (void)_setDefaultGroupValues:(id)arg1;
- (void)_setupFloat2AnimationForState:(void *)arg1 startValue:(void *)arg2 endValue:(void *)arg3 key:(void *)arg4 applier:(void *)arg5; // needs 5 arg types, found 3: id, id, id /* block */
- (void)_setupFloatAnimationForState:(id)arg1 startValue:(float)arg2 endValue:(float)arg3 key:(id)arg4 applier:(id /* block */)arg5;
- (void)_setupUIntAnimationForState:(id)arg1 startValue:(unsigned long long)arg2 endValue:(unsigned long long)arg3 key:(id)arg4 applier:(id /* block */)arg5;
- (bool)_shouldObserveSequencer;
- (void)_updateAnimationObserving;
- (void)_updateRingGroupLayout;
- (bool)animating;
- (void)animationSequencer:(id)arg1 updatedWithTime:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (float)emptyOpacity;
- (id)forCompanion;
- (id)forWatch;
- (float)groupDiameter;
- (id)initWithNumberOfRings:(long long)arg1;
- (id)initWithNumberOfRings:(long long)arg1 animationSequencer:(id)arg2;
- (id)initWithRings:(id)arg1 animationSequencer:(id)arg2;
- (float)interspacing;
- (float)opacity;
- (bool)paused;
- (void)playCelebration:(id)arg1 onRingAtIndex:(unsigned long long)arg2;
- (void)playCelebration:(id)arg1 onRingAtIndex:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)playSpriteAnimation;
- (void)playSpriteAnimationWithCompletion:(id /* block */)arg1;
- (id)playingSpriteAnimation;
- (void)removeAllAnimations;
- (long long)ringType;
- (id)rings;
- (float)scale;
- (void)setActiveEnergyPercentage:(float)arg1 animated:(bool)arg2;
- (void)setActiveEnergyPercentage:(float)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setActiveEnergyPercentage:(float)arg1 exerciseMinutesPercentage:(float)arg2 standHoursPercentage:(float)arg3 animated:(bool)arg4;
- (void)setActiveEnergyPercentage:(float)arg1 exerciseMinutesPercentage:(float)arg2 standHoursPercentage:(float)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)setDelegate:(id)arg1;
- (void)setEmptyOpacity:(float)arg1;
- (void)setEmptyOpacity:(float)arg1 ofRingAtIndex:(unsigned long long)arg2;
- (void)setExerciseMinutesPercentage:(float)arg1 animated:(bool)arg2;
- (void)setExerciseMinutesPercentage:(float)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setFrame:(unsigned long long)arg1 ofSpriteAtIndex:(unsigned long long)arg2;
- (void)setGroupDiameter:(float)arg1;
- (void)setInterspacing:(float)arg1;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1 animated:(bool)arg2;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setIsStandalonePhoneFitnessMode:(bool)arg1 completion:(id /* block */)arg2;
- (void)setOpacity:(float)arg1;
- (void)setOpacity:(float)arg1 ofRingAtIndex:(unsigned long long)arg2;
- (void)setPaused:(bool)arg1;
- (void)setPercentage:(float)arg1 ofRingAtIndex:(unsigned long long)arg2;
- (void)setPercentage:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3;
- (void)setPercentage:(float)arg1 ofRingAtIndex:(long long)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)setPercentage:(float)arg1 ofRingAtIndex:(unsigned long long)arg2 fromAnimation:(bool)arg3;
- (void)setRingType:(long long)arg1;
- (void)setScale:(float)arg1;
- (void)setSpriteSheet:(id)arg1;
- (void)setStandHoursPercentage:(float)arg1 animated:(bool)arg2;
- (void)setStandHoursPercentage:(float)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setThickness:(float)arg1;
- (void)setThickness:(float)arg1 ofRingAtIndex:(unsigned long long)arg2;
- (void)setTopColor:(id)arg1 bottomColor:(id)arg2 ofRingAtIndex:(long long)arg3;
- (void)setTrackOpacity:(float)arg1;
- (void)setTrackOpacity:(float)arg1 ofRingAtIndex:(unsigned long long)arg2;
- (void)setTranslation;
- (void)setZRotation:(float)arg1;
- (id)spriteSheet;
- (float)thickness;
- (float)trackOpacity;
- (void)translation;
- (id)withSpriteSheet;
- (id)withWheelchairSpriteSheet;
- (float)zRotation;

// Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI

- (void)hk_configureWithActivitySummary:(id)arg1 animated:(bool)arg2;
- (void)hk_configureWithActivitySummary:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;

@end
