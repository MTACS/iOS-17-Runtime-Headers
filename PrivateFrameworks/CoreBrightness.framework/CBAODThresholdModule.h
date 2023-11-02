
@interface CBAODThresholdModule : CBModule <CBHIDServiceProtocol> {
    float  _AP_Pthreshold_brighten;
    float  _AP_Pthreshold_dim;
    float  _Pthreshold_brighten;
    float  _Pthreshold_brighten_lowLux;
    float  _Pthreshold_dim;
    float  _Pthreshold_dim_lowLux;
    NSMutableArray * _alsServiceClients;
    float  _brightenLuxThreshold;
    bool  _brightenLuxThresholdOverriden;
    float  _currentBrightness;
    float  _currentBrightnessLimit;
    float  _currentLux;
    float  _dimLuxThreshold;
    bool  _dimLuxThresholdOverriden;
    float  _maxNits;
    float  _minNits;
}

@property float brightenLuxThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property float dimLuxThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (float)brightenLuxThreshold;
- (void)checkBootArgsConfiguration;
- (id)copyPdeltaThresholdsForLux:(float)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)dealloc;
- (float)dimLuxThreshold;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (id)initWithQueue:(id)arg1;
- (void)reevaluateALSThresholds;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)setBrightenLuxThreshold:(float)arg1;
- (void)setDimLuxThreshold:(float)arg1;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)thresholdsCrossedForLux:(float)arg1;
- (void)updateALSThresholdsWithBrightness:(float)arg1 brightnessLimit:(float)arg2 lux:(float)arg3;

@end
