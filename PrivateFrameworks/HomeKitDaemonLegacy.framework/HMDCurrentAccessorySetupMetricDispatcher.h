
@interface HMDCurrentAccessorySetupMetricDispatcher : HMFObject <HMFLogging> {
    unsigned long long  _addAccessoryFinishTime;
    id /* block */  _currentUpTicksFactory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    unsigned long long  _pairingIdentityCreationTime;
    unsigned long long  _settingsCreationTime;
    unsigned long long  _setupSessionEndTime;
    unsigned long long  _setupSessionStartTime;
    unsigned long long  _siriReadyTime;
    bool  _submitted;
}

@property (readonly) unsigned long long addAccessoryFinishTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long pairingIdentityCreationTime;
@property (readonly) unsigned long long settingsCreationTime;
@property (readonly) unsigned long long setupSessionEndTime;
@property (readonly) unsigned long long setupSessionStartTime;
@property (readonly) unsigned long long siriReadyTime;
@property (readonly) bool submitted;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)addAccessoryFinishTime;
- (id)initWithSetupSessionStartTime:(unsigned long long)arg1 setupSessionEndTime:(unsigned long long)arg2 logEventSubmitter:(id)arg3;
- (id)initWithSetupSessionStartTime:(unsigned long long)arg1 setupSessionEndTime:(unsigned long long)arg2 logEventSubmitter:(id)arg3 currentUpTicksFactory:(id /* block */)arg4;
- (void)markCurrentAccessoryAddComplete;
- (void)markPairingIdentityCreated;
- (void)markSettingsCreated;
- (void)markSiriReady;
- (unsigned long long)pairingIdentityCreationTime;
- (unsigned long long)settingsCreationTime;
- (unsigned long long)setupSessionEndTime;
- (unsigned long long)setupSessionStartTime;
- (unsigned long long)siriReadyTime;
- (bool)submitted;

@end
