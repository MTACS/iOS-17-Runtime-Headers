
@interface HMUserActionPredictionDuetDataSource : NSObject <HMFLogging> {
    HMCacheManager * _cacheManager;
    NSArray * _lastFetchedPredictions;
    <HMCache> * _predictionCache;
    <HMUserActionSuggestionProvider> * _suggestionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)fetchPredictionsFromCache;
- (id)fetchPredictionsFromDuet;
- (id)initWithCacheManager:(id)arg1;
- (id)initWithCacheManager:(id)arg1 suggestionProvider:(id)arg2;
- (id)predictions;

@end
