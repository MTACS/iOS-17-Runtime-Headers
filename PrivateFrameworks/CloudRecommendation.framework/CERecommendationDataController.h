
@interface CERecommendationDataController : NSObject {
    ACAccount * _account;
}

- (void).cxx_destruct;
- (void)fetchCompletedRecommendations:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCompletedRecommendations:(id)arg1 recommendationInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRecommendationsRulesetWithCompletion:(id /* block */)arg1;
- (void)fetchRecommendationsRulesetWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecommendationsWithCompletion:(id /* block */)arg1;
- (void)fetchRecommendationsWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1;
- (void)sendRecommendationStatus:(id)arg1 configuration:(id)arg2 recommendationIdentifiers:(id)arg3 storageRecovered:(id)arg4 completion:(id /* block */)arg5;

@end
