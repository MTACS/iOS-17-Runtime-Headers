
@interface HDOntologyFeatureCoordinator : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDProfileReadyObserver> {
    NSArray * _featureEvaluators;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _lock_shardRequirementStatuses;
    NSObject<OS_dispatch_queue> * _observationQueue;
    NSMutableDictionary * _observationQueue_isProfileReady;
    id /* block */  _unitTesting_didInsertEntry;
    double  _unitTesting_minimumTimeToLive;
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *shardRequirementStatuses;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_didInsertEntry;
@property (nonatomic) double unitTesting_minimumTimeToLive;
@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)evaluteRequiredShardsForEvalulator:(id)arg1 reason:(id)arg2;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (bool)markShardsWithIdentifiers:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)profileDidBecomeReady:(id)arg1;
- (void)profileListDidChange;
- (void)setUnitTesting_didInsertEntry:(id /* block */)arg1;
- (void)setUnitTesting_minimumTimeToLive:(double)arg1;
- (id)shardRequirementStatuses;
- (id /* block */)unitTesting_didInsertEntry;
- (double)unitTesting_minimumTimeToLive;
- (id)updateCoordinator;

@end
