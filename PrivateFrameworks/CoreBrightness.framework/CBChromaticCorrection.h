
@interface CBChromaticCorrection : CBModule <CBAODProtocol, CBContainerModuleProtocol> {
    bool  _aodIsOn;
    bool  _aodRampHandoffPending;
    bool  _autoBrightnessIsEnabled;
    int (* _currentTime;
    bool  _isEnabled;
    NSObject<OS_os_log> * _log;
    float  _nits;
    CBChromaticCorrectionParams * _params;
    <CBChromaticCorrectionPolicy> * _policy;
    CBLuxBezierRamp * _ramp;
    float  _trustedLux;
}

@property (readonly) float aodRampDuration;
@property int (*currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property float nits;
@property (readonly) CBChromaticCorrectionParams *params;
@property (readonly) Class superclass;

- (float)aodRampDuration;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (float)currentStrength;
- (int (*)currentTime;
- (void)dealloc;
- (bool)handleAODStateUpdate:(unsigned long long)arg1 transitionTime:(float)arg2 context:(id)arg3;
- (void)handleLuxUpdate:(float)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)handleRampResult:(int)arg1;
- (id)initWithBacklightParams:(id)arg1 andPolicy:(id)arg2;
- (bool)isEnabled;
- (bool)isInActiveRange;
- (float)lux;
- (float)luxAdjustedByInternalPolicies:(float)arg1;
- (float)nits;
- (bool)nitsAreInActiveRange:(float)arg1;
- (id)params;
- (bool)rampIsRunning;
- (void)setCurrentTime:(int (*)arg1;
- (void)setLux:(float)arg1;
- (void)setNits:(float)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)shouldRampForIncomingLux:(float)arg1;
- (bool)shouldRampFromStartLux:(float)arg1 toTargetLux:(float)arg2;
- (void)start;
- (void)stop;
- (float)targetLux;
- (void)updateRamp;
- (void)updateRampWithProgress:(float)arg1;

@end
