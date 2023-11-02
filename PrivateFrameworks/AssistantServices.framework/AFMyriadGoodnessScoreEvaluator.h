
@interface AFMyriadGoodnessScoreEvaluator : NSObject <AFSettingsDelegate> {
    AFInstanceContext * _deviceInstanceContext;
    bool  _evaluateForAudioAccessory;
    double  _lastActivationTime;
    AFMyriadInstrumentation * _myriadInstrumentation;
    unsigned char  _myriadPlatformBias;
    unsigned long long  _platformBiasAcquisitionState;
    AFPreferences * _pref;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _scoreEvaluationLock;
    AFSettingsConnection * _settingsConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool evaluateForAudioAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastActivationTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned char)_bumpGoodnessScore:(id)arg1 lastActivationTime:(double)arg2 mediaPlaybackInterruptedTime:(double)arg3 ignoreAdjustedBoost:(bool)arg4 recentlyWonBySmallAmount:(bool)arg5;
- (id)_createSettingsConnectionIfRequired;
- (void)_fetchDevicePlatformBiasIfRequired;
- (unsigned char)_getRecentBump:(double)arg1 ignoreAdjustedBoost:(bool)arg2 recentlyWonBySmallAmount:(bool)arg3;
- (void)_settingsConnectionDidDisconnect;
- (bool)_supportsConfigurableBoost;
- (void)_updateBiasValueWithDefault:(unsigned long long)arg1;
- (void)_updatePlatformBias:(unsigned char)arg1;
- (bool)evaluateForAudioAccessory;
- (unsigned char)getMyriadAdjustedBoostForGoodnessScoreContext:(id)arg1;
- (unsigned char)getPlatformBias;
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3;
- (id)initWithDeviceInstanceContext:(id)arg1 preferences:(id)arg2 queue:(id)arg3 instrumentation:(id)arg4;
- (id)initWithDeviceInstanceContext:(id)arg1 queue:(id)arg2;
- (double)lastActivationTime;
- (void)preheat;
- (void)setLastActivationTime:(double)arg1;

@end
