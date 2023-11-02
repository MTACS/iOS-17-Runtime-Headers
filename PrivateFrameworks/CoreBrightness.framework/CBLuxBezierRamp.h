
@interface CBLuxBezierRamp : NSObject {
    float  _duration;
    float  _lux;
    CBChromaticCorrectionParams * _params;
    <CBChromaticCorrectionPolicy> * _policy;
    float  _startLux;
    float  _startTime;
    int  _state;
    float  _targetLux;
    float  _targetTime;
}

@property (readonly) float duration;
@property (readonly) float lux;
@property (readonly) float startLux;
@property (readonly) float startTime;
@property (readonly) float targetLux;
@property (readonly) float targetTime;

+ (id)luxRampStateToString:(int)arg1;

- (void)dealloc;
- (float)duration;
- (void)forceLux:(float)arg1;
- (id)initWithParams:(id)arg1 andPolicy:(id)arg2;
- (float)lux;
- (int)rampFromLux:(float)arg1 toLux:(float)arg2;
- (int)rampFromLux:(float)arg1 toLux:(float)arg2 forceRamp:(bool)arg3;
- (bool)rampIsRunning;
- (int)rampTimedFromLux:(float)arg1 toLux:(float)arg2 atTime:(float)arg3;
- (int)rampTimedFromLux:(float)arg1 toLux:(float)arg2 atTime:(float)arg3 forceRamp:(bool)arg4;
- (bool)shouldRampFromStartLux:(float)arg1 toTargetLux:(float)arg2;
- (float)startLux;
- (float)startTime;
- (float)targetLux;
- (float)targetTime;
- (int)updateRampWithProgress:(float)arg1;
- (int)updateTimedRamp:(float)arg1;

@end
