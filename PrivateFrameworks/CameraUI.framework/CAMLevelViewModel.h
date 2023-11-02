
@interface CAMLevelViewModel : CAMObservable {
    long long  __desiredIndicatorMode;
    double  __desiredModeBeganTime;
    double  __lastNonZeroAngleTime;
    double  _currentIndicatorAlpha;
    long long  _currentIndicatorMode;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _currentIndicatorOffset;
    double  _currentIndicatorRotationAngle;
    double  _desiredUpdateInterval;
}

@property (setter=_setDesiredIndicatorMode:, nonatomic) long long _desiredIndicatorMode;
@property (setter=_setDesiredModeBeganTime:, nonatomic) double _desiredModeBeganTime;
@property (setter=_setLastNonZeroAngleTime:, nonatomic) double _lastNonZeroAngleTime;
@property (setter=_setCurrentIndicatorAlpha:, nonatomic) double currentIndicatorAlpha;
@property (setter=_setCurrentIndicatorMode:, nonatomic) long long currentIndicatorMode;
@property (setter=_setCurrentIndicatorOffset:, nonatomic) struct UIOffset { double x1; double x2; } currentIndicatorOffset;
@property (setter=_setCurrentIndicatorRotationAngle:, nonatomic) double currentIndicatorRotationAngle;
@property (setter=_setDesiredUpdateInterval:, nonatomic) double desiredUpdateInterval;

- (long long)_desiredIndicatorMode;
- (double)_desiredModeBeganTime;
- (void)_deviceAngleForGravity:(struct { double x1; double x2; double x3; })arg1 deviceOrientation:(long long)arg2 relativeRoll:(out double*)arg3 relativePitch:(out double*)arg4;
- (double)_hysteresisAlphaForDesiredAlpha:(double)arg1 fromCurrentAlpha:(double)arg2;
- (long long)_hysteresisModeForDesiredMode:(long long)arg1;
- (double)_lastNonZeroAngleTime;
- (void)_setCurrentIndicatorAlpha:(double)arg1;
- (void)_setCurrentIndicatorMode:(long long)arg1;
- (void)_setCurrentIndicatorOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setCurrentIndicatorRotationAngle:(double)arg1;
- (void)_setDesiredIndicatorMode:(long long)arg1;
- (void)_setDesiredModeBeganTime:(double)arg1;
- (void)_setDesiredUpdateInterval:(double)arg1;
- (void)_setLastNonZeroAngleTime:(double)arg1;
- (void)_updateFlatModeWithRoll:(float)arg1 pitch:(float)arg2 magnitude:(float)arg3;
- (void)_updateModeNone;
- (void)_updateStraightModeWithMode:(long long)arg1 roll:(double)arg2 pitch:(double)arg3;
- (void)applyDeviceMotion:(id)arg1 deviceOrientation:(long long)arg2;
- (double)currentIndicatorAlpha;
- (long long)currentIndicatorMode;
- (struct UIOffset { double x1; double x2; })currentIndicatorOffset;
- (double)currentIndicatorRotationAngle;
- (double)desiredUpdateInterval;
- (id)mutableChangeObject;
- (void)reset;

@end
