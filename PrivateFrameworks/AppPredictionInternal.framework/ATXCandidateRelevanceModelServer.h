
@interface ATXCandidateRelevanceModelServer : NSObject {
    ATXCandidateRelevanceModelConfig * _config;
}

+ (id)currentContextForConfig:(id)arg1 contextOverride:(id)arg2;
+ (id)mergeHeuristicSuggestions:(id)arg1 withSuggestions:(id)arg2;
+ (id)suggestionExecutableIdsFromSuggestions:(id)arg1;

- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;
- (void)sendSuggestionsToBlending;
- (void)sendSuggestionsToBlendingForContext:(id)arg1;
- (id)sortedProactiveSuggestionsForContext:(id)arg1;

@end
