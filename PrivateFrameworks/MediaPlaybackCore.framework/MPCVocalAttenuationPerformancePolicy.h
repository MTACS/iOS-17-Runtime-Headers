
@interface MPCVocalAttenuationPerformancePolicy : NSObject <MPCVocalAttenuationPolicy> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    int  _currentNumberOfGlitches;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    <MPCVocalAttenuationPolicyDelegate> * _delegate;
    bool  _disableVocalAttenuation;
    int  _glitchesThreshold;
    double  _performanceLimit;
    double  _timeOfFirstGlitch;
    double  _timeThreshold;
    long long  _type;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calloutQueue;
@property (nonatomic, readonly) bool canBeReset;
@property (nonatomic) int currentNumberOfGlitches;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dataLock;
@property (nonatomic, readonly) <MPCVocalAttenuationPolicyDelegate> *delegate;
@property (getter=shouldDisableVocalAttenuation, nonatomic) bool disableVocalAttenuation;
@property (nonatomic) int glitchesThreshold;
@property (nonatomic) double performanceLimit;
@property (nonatomic) double timeOfFirstGlitch;
@property (nonatomic) double timeThreshold;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)calloutQueue;
- (bool)canBeReset;
- (int)currentNumberOfGlitches;
- (struct os_unfair_lock_s { unsigned int x1; })dataLock;
- (id)delegate;
- (id)evaluation;
- (int)glitchesThreshold;
- (id)initWithPerformanceLimit:(double)arg1 calloutQueue:(id)arg2 delegate:(id)arg3;
- (double)performanceLimit;
- (void)processSample:(double)arg1;
- (void)reset;
- (void)setCalloutQueue:(id)arg1;
- (void)setCurrentNumberOfGlitches:(int)arg1;
- (void)setDisableVocalAttenuation:(bool)arg1;
- (void)setGlitchesThreshold:(int)arg1;
- (void)setPerformanceLimit:(double)arg1;
- (void)setTimeOfFirstGlitch:(double)arg1;
- (void)setTimeThreshold:(double)arg1;
- (bool)shouldDisableVocalAttenuation;
- (double)timeOfFirstGlitch;
- (double)timeThreshold;
- (long long)type;
- (void)updateEvaluationWithReason:(id)arg1;

@end
