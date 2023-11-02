
@interface WBSTrialManager : NSObject {
    NSMutableDictionary * _customFactorsDictionary;
    NSString * _experimentId;
    NSDictionary * _factors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _ready;
    WBSDiagnosticStateCollector * _stateCollector;
    NSString * _treatmentId;
    TRIClient * _trialClient;
}

@property (nonatomic, copy) NSString *experimentId;
@property (nonatomic, retain) NSDictionary *factors;
@property (nonatomic, readonly) WBSTrialIdentifiers *identifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool ready;
@property (nonatomic, copy) NSString *treatmentId;
@property (nonatomic, retain) TRIClient *trialClient;

+ (id)shared;

- (void).cxx_destruct;
- (double)CFSearchTimeoutForDefault:(double)arg1;
- (id)experimentId;
- (id)factorWithName:(id)arg1;
- (id)factors;
- (void)fetchFactorsInNamespace:(id)arg1;
- (bool)getBoolFactor:(id)arg1 forCF:(bool)arg2 forDefault:(bool)arg3;
- (id)getFactorValueAsString:(id)arg1;
- (double)getFloatFactor:(id)arg1 forCF:(bool)arg2 forDefault:(double)arg3;
- (long long)getIntFactor:(id)arg1 forCF:(bool)arg2 forDefault:(long long)arg3;
- (id)getRetrievalFactorName:(id)arg1 forCF:(bool)arg2;
- (id)identifiers;
- (bool)inExperiment;
- (id)init;
- (bool)isCFEnabled;
- (bool)isReady;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)numberFactorWithName:(id)arg1;
- (id)prepareLogDictionary:(bool)arg1 withExperimentId:(id)arg2 withTreatmentId:(id)arg3 isCounterFactualSearch:(bool)arg4 withFactorData:(id)arg5;
- (id)queue;
- (bool)ready;
- (void)registerDiagnosticInfo:(id)arg1;
- (bool)runCFFlow;
- (void)setExperimentId:(id)arg1;
- (void)setFactorWithName:(id)arg1 value:(id)arg2;
- (void)setFactors:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setQueue:(id)arg1;
- (void)setReady:(bool)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (id)stringFactorWithName:(id)arg1;
- (id)treatmentId;
- (id)trialClient;

@end
