
@interface HKFeatureStatusProvidingDataSource : HKObserverBridge {
    HKFeatureAvailabilityRequirementEvaluationDataSource * _dataSource;
    NSMutableDictionary * _featureStatusProvidingByFeatureIdentifierAndContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _observationQueue;
}

@property (nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;
@property (nonatomic, readonly) NSMutableDictionary *featureStatusProvidingByFeatureIdentifierAndContext;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *observationQueue;

- (void).cxx_destruct;
- (id)_featureStatusProvidingForFeatureIdentifierAndContext:(id)arg1;
- (id)_makeFeatureStatusProviderForFeatureIdentifier:(id)arg1 context:(id)arg2 dataSource:(id)arg3;
- (id)dataSource;
- (id)featureStatusProvidingByFeatureIdentifierAndContext;
- (id)featureStatusProvidingForFeatureIdentifier:(id)arg1 context:(id)arg2;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)makeAndRegisterBridgedObserverForKey:(id)arg1 handle:(id)arg2;
- (id)observationQueue;
- (void)setDataSource:(id)arg1;
- (void)unregisterBridgedObserver:(id)arg1 forKey:(id)arg2;

@end
