
@interface PGSharingSuggestionSourceMomentLearning : PGSharingSuggestionSource {
    MALearningStreamUtils * _learningStreamUtils;
}

- (void).cxx_destruct;
- (id)details;
- (id)initWithLearningStreamUtils:(id)arg1;
- (id)name;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (double)weight;

@end
