
@interface PGSharingSuggestionSourceCoworker : PGSharingSuggestionGraphBasedSource

- (id)details;
- (id)name;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (double)weight;

@end
