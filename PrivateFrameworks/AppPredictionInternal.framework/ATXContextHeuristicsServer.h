
@interface ATXContextHeuristicsServer : NSObject <ATXContextHeuristicsDelegate> {
    ATXContextHeuristics * _heuristics;
    ATXContextHeuristicsScheduler * _sportsScheduler;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_cachedContextsFromSuggestions:(id)arg1;
- (id)_contextHeuristicsClientModel;
- (id)_retrieveOldContextHeuristicsSuggestions;
- (void)_updateBlendingLayerWithSuggestionsFromContextHeuristics:(id)arg1;
- (void)_updateBlendingLayerWithSuggestionsFromSpotlightRecents:(id)arg1;
- (void)_updateContextHeuristicsBiomeStreamWithNewSuggestions:(id)arg1 oldSuggestions:(id)arg2;
- (void)contextHeuristics:(id)arg1 didUpdateSpotlightRecents:(id)arg2;
- (void)contextHeuristics:(id)arg1 didUpdateSuggestions:(id)arg2;
- (id)init;
- (id)initWithHeuristics:(id)arg1;

@end
