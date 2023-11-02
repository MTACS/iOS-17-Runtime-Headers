
@interface MPCVocalAttenuationThermalPressurePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    long long  _currentThermalLevel;
    long long  _cutoffThermalLevel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    <MPCVocalAttenuationPolicyDelegate> * _delegate;
    bool  _disableVocalAttenuation;
    long long  _reenablementThermalLevel;
    ICEnvironmentMonitor * _thermalMonitor;
    long long  _type;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) bool canBeReset;
@property (nonatomic) long long currentThermalLevel;
@property (nonatomic) long long cutoffThermalLevel;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataLock;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MPCVocalAttenuationPolicyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=shouldDisableVocalAttenuation, nonatomic) bool disableVocalAttenuation;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long reenablementThermalLevel;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICEnvironmentMonitor *thermalMonitor;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)calloutQueue;
- (bool)canBeReset;
- (long long)currentThermalLevel;
- (long long)cutoffThermalLevel;
- (struct os_unfair_lock_s { unsigned int x1; })dataLock;
- (id)delegate;
- (void)environmentMonitorDidChangeThermalLevel:(id)arg1;
- (id)evaluation;
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;
- (id)initWithThermalMonitor:(id)arg1 calloutQueue:(id)arg2 delegate:(id)arg3;
- (long long)reenablementThermalLevel;
- (void)reset;
- (void)setCalloutQueue:(id)arg1;
- (void)setCurrentThermalLevel:(long long)arg1;
- (void)setCutoffThermalLevel:(long long)arg1;
- (void)setDisableVocalAttenuation:(bool)arg1;
- (void)setReenablementThermalLevel:(long long)arg1;
- (void)setThermalMonitor:(id)arg1;
- (bool)shouldDisableVocalAttenuation;
- (id)thermalMonitor;
- (void)thermalStateDidChange:(long long)arg1;
- (long long)type;
- (void)updateEvaluationWithReason:(id)arg1;

@end
