
@interface EDCachingMailboxPredictor : NSObject <EDMailboxPredictor> {
    NSCache * _cache;
    NSMutableDictionary * _cacheKeysByProperty;
    <EDMailboxPredictor> * _predictor;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSMutableDictionary *cacheKeysByProperty;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <EDMailboxPredictor> *predictor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cacheKeyForMessages:(id)arg1;
- (id)_propertyKeysForMessage:(id)arg1;
- (void)_trackCacheKey:(id)arg1 forPropertyKey:(id)arg2;
- (id)cache;
- (id)cacheKeysByProperty;
- (id)initWithPredictor:(id)arg1;
- (void)invalidatePredictionsAffectedByMessage:(id)arg1;
- (id)predictMailboxIDsForMessages:(id)arg1 limit:(unsigned long long)arg2;
- (id)predictor;
- (void)removeAllPredictions;
- (void)setCache:(id)arg1;
- (void)setCacheKeysByProperty:(id)arg1;
- (void)setPredictor:(id)arg1;

@end
