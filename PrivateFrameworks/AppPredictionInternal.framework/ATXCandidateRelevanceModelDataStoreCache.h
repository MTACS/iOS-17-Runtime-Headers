
@interface ATXCandidateRelevanceModelDataStoreCache : NSObject {
    NSMutableDictionary * _featurizationManagers;
}

- (void).cxx_destruct;
- (id)featurizationManagerForFeaturizationManagerId:(long long)arg1;
- (id)init;
- (void)setFeaturizationManager:(id)arg1 forFeaturizationManagerId:(long long)arg2;

@end
