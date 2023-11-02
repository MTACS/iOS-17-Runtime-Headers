
@interface PGSharingSuggestionSourceMergeCandidates : PGSharingSuggestionPhotoKitBasedSource

- (bool)canRunWithOptions:(id)arg1;
- (id)details;
- (id)filterMeNodePredicateForInput:(id)arg1 photoLibrary:(id)arg2;
- (id)name;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (double)weight;

@end
