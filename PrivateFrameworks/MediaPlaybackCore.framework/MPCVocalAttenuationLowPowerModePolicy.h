
@interface MPCVocalAttenuationLowPowerModePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    <MPCVocalAttenuationPolicyDelegate> * _delegate;
    bool  _disableVocalAttenuation;
    bool  _lowPowerModeEnabled;
    NSProcessInfo * _powerMonitor;
    long long  _type;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) bool canBeReset;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataLock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MPCVocalAttenuationPolicyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=shouldDisableVocalAttenuation, nonatomic) bool disableVocalAttenuation;
@property (readonly) unsigned long long hash;
@property (getter=isLowPowerModeEnabled, nonatomic) bool lowPowerModeEnabled;
@property (nonatomic, retain) NSProcessInfo *powerMonitor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)calloutQueue;
- (bool)canBeReset;
- (struct os_unfair_lock_s { unsigned int x1; })dataLock;
- (id)delegate;
- (id)evaluation;
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithPowerModeMonitor:(id)arg1 calloutQueue:(id)arg2 delegate:(id)arg3;
- (bool)isLowPowerModeEnabled;
- (void)powerModeDidChange:(bool)arg1;
- (id)powerMonitor;
- (void)processInfoPowerStateDidChange:(id)arg1;
- (void)reset;
- (void)setCalloutQueue:(id)arg1;
- (void)setDisableVocalAttenuation:(bool)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setPowerMonitor:(id)arg1;
- (bool)shouldDisableVocalAttenuation;
- (long long)type;
- (void)updateEvaluationWithReason:(id)arg1;

@end
