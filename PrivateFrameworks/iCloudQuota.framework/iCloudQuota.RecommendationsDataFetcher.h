
@interface iCloudQuota.RecommendationsDataFetcher : NSObject {
    void dataFetchers;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)fetchClientRecommendationsFor:(id)arg1 shouldIgnoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchCompletedRecommendationsFor:(id)arg1 shouldIgnoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchRulesetsFor:(id)arg1 shouldIgnoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchServerRecommendationsFor:(id)arg1 shouldIgnoreCache:(bool)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)refreshCacheFor:(id)arg1;
- (void)refreshCacheFor:(id)arg1 completion:(id /* block */)arg2;

@end
