
@interface PowerUITrialManager : NSObject {
    NSString * _defaultsDomain;
    NSString * _experimentID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    NSString * _treatmentID;
    TRIClient * _trialClient;
    NSString * _trialNamespaceName;
    TRITrackingId * _trialTrackingID;
    NSMutableArray * _updateHandlers;
}

@property (nonatomic, retain) NSString *defaultsDomain;
@property (retain) NSString *experimentID;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (retain) NSString *treatmentID;
@property (nonatomic, retain) TRIClient *trialClient;
@property (nonatomic, retain) NSString *trialNamespaceName;
@property (retain) TRITrackingId *trialTrackingID;
@property (nonatomic, retain) NSMutableArray *updateHandlers;

- (void).cxx_destruct;
- (void)addUpdateHandler:(id /* block */)arg1;
- (id)defaultsDomain;
- (double)doubleFactorForName:(id)arg1;
- (id)experimentID;
- (id)factorForName:(id)arg1;
- (id)initWithDefaultsDomain:(id)arg1;
- (id)loadModelFromPath:(id)arg1 deleteExistingFiles:(bool)arg2;
- (double)loadTrialAdjustedHours;
- (id)loadTrialDurationModelByDeletingExistingModel:(bool)arg1;
- (id)loadTrialEngageModelByDeletingExistingModel:(bool)arg1;
- (double)loadTrialMinInputChargeDuration;
- (double)loadTrialThreshold;
- (void)loadTrialUpdates;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)log;
- (long long)longFactorForName:(id)arg1;
- (void)setDefaultsDomain:(id)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setLog:(id)arg1;
- (void)setTreatmentID:(id)arg1;
- (void)setTrialClient:(id)arg1;
- (void)setTrialNamespaceName:(id)arg1;
- (void)setTrialTrackingID:(id)arg1;
- (void)setUpdateHandlers:(id)arg1;
- (id)treatmentID;
- (id)trialClient;
- (id)trialFactor:(id)arg1;
- (id)trialNamespaceName;
- (id)trialTrackingID;
- (id)updateHandlers;
- (bool)useTrialEnabledFeature:(id)arg1;

@end
