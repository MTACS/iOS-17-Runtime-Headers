
@interface ATXInformationProbabilisticRanker : NSObject <ATXInformationRankerProtocol>

- (id)_groupSuggestionsByConfidenceLevel:(id)arg1;
- (id)_rankNumbersProbabilistically:(id)arg1;
- (id)_rankSuggestionsProbabilistically:(id)arg1;
- (id)_smooth:(id)arg1;
- (double)_standardUniformDistribution;
- (double)_tieBreakingScoreForSuggestion:(id)arg1;
- (id)_tieBreakingScoresForSuggestions:(id)arg1;
- (id)sortFeaturizedSuggestions:(id)arg1 withFeatureWeights:(id)arg2;

@end
