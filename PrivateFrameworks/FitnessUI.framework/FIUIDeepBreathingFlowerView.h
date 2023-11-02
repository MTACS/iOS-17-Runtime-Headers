
@interface FIUIDeepBreathingFlowerView : UIView <FIUIDeepBreathingPetalRingViewDelegate> {
    double  _breathsPerMinute;
    double  _centerVerticalOffsetBeforeTransitionToConfiguration;
    UILabel * _congratulationsLabel;
    NSString * _congratulationsText;
    <FIUIBreathingPetalRingViewDrawable> * _currentPetalRing;
    long long  _numberOfVisiblePetals;
    long long  _petalColor;
    double  _petalCountOverride;
    NSMutableDictionary * _petalRingsByNumberOfPetals;
    double  _sessionDuration;
    bool  _showBlurTrails;
    long long  _state;
    double  _stateEndTime;
    double  _stateStartTime;
    NSMutableArray * _trailAlphaKeyFrames;
    NSMutableArray * _trailAlphaKeyValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createCongratulationsLabelIfNeeded;
- (id)_currentPetalRing;
- (double)_curveEaseInValue:(double)arg1;
- (float)_interpolateWithKeyFrames:(id)arg1 keyValues:(id)arg2 value:(float)arg3;
- (struct CGPoint { double x1; double x2; })_originalRingCenterForWindType:(long long)arg1;
- (double)_petalCountForMinutesRemaining:(double)arg1;
- (id)_petalRingWithNumberOfShaderPetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)_ppt_setPetalCountOverride:(long long)arg1;
- (void)_preloadPetalRings;
- (void)_setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)_setState:(long long)arg1;
- (void)_setWindFraction:(double)arg1 smallRadius:(double)arg2 largeRadius:(double)arg3 windType:(long long)arg4 showBlurTrails:(bool)arg5;
- (void)_updateForBreathWithPetalCount:(long long)arg1 petalRadius:(double)arg2 inhaleDuration:(double)arg3 exhaleDuration:(double)arg4 timeInCurrentBreath:(double)arg5 showBlurTrails:(bool)arg6 shouldSpin:(bool)arg7;
- (void)_updateForCongratulationsWithTimeInState:(double)arg1 fractionComplete:(double)arg2;
- (void)_updateForGuidingWithTimeInState:(double)arg1;
- (void)_updateForOnRampWithTimeInState:(double)arg1;
- (void)_updateForShrinkToOnRampWithFractionComplete:(double)arg1;
- (void)_updateForUnwindToCompletedWithFractionComplete:(double)arg1;
- (void)_updateForWindToConfigurationWithFractionComplete:(double)arg1;
- (void)_updatePetalsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 radius:(double)arg2 radialDistance:(double)arg3 angleOffset:(double)arg4 clockwise:(bool)arg5 alpha:(float)arg6;
- (void)_updateShaderForNumberOfPetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 congratulationsText:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 petalColor:(long long)arg2 congratulationsText:(id)arg3;
- (void)petalRingViewDisplayLinkDidFire:(id)arg1;
- (void)setNumberOfConfigurationPetals:(double)arg1;
- (void)setWelcomeWindFraction:(double)arg1;
- (void)startGuidingAtDate:(id)arg1 breathsPerMinute:(double)arg2;
- (void)startOnRampAtDate:(id)arg1 sessionDuration:(double)arg2;
- (void)transitionToCompletedWithDuration:(double)arg1;
- (void)transitionToConfigurationAnimated:(bool)arg1;
- (void)transitionToCongratulations;

@end
