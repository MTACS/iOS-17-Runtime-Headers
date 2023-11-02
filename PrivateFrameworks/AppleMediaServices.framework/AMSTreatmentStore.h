
@interface AMSTreatmentStore : NSObject {
    AMSLRUCache * _areasCache;
    long long  _cachePolicy;
    AMSEngagement * _engagement;
    AMSLRUCache * _treatmentsCache;
}

@property (readonly) AMSLRUCache *areasCache;
@property (readonly) long long cachePolicy;
@property (nonatomic, retain) AMSEngagement *engagement;
@property (readonly) AMSLRUCache *treatmentsCache;

+ (bool)attemptConnectionInTests;
+ (id)defaultTreatmentStore;
+ (void)setAttemptConnectionInTests:(bool)arg1;

- (void).cxx_destruct;
- (void)_cacheAreas:(id)arg1 forNamespace:(id)arg2;
- (void)_cacheAreas:(id)arg1 forTopic:(id)arg2;
- (void)_cacheTreatment:(id)arg1 forArea:(id)arg2;
- (id)_cachedAreasForNamespace:(id)arg1;
- (id)_cachedAreasForTopic:(id)arg1;
- (id)_cachedTreatmentForArea:(id)arg1;
- (id)_encodeExperimentData:(id)arg1;
- (id)_treatmentStoreService;
- (void)_treatmentsDidSyncronize:(id)arg1;
- (id)areasCache;
- (id)areasForNamespaces:(id)arg1;
- (id)areasForTopics:(id)arg1;
- (long long)cachePolicy;
- (void)dealloc;
- (id)encodeExperimentDataForTopic:(id)arg1;
- (id)engagement;
- (id)experimentDataForAreas:(id)arg1;
- (id)init;
- (id)initWithCachePolicy:(long long)arg1;
- (void)setEngagement:(id)arg1;
- (id)synchronizeTreatments;
- (id)treatmentsCache;
- (id)treatmentsForAreas:(id)arg1;
- (id)treatmentsPayloadForAreas:(id)arg1;

@end
