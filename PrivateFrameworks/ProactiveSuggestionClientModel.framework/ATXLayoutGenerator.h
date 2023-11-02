
@interface ATXLayoutGenerator : NSObject <ATXLayoutGeneratorProtocol> {
    <ATXUniversalSuggestionDeduplicatorProtocol> * _deduplicator;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    NSArray * _layoutsToConsider;
    NSArray * _rankedSuggestions;
}

+ (id)sortLayouts:(id)arg1;

- (void).cxx_destruct;
- (id)generateGreedySuggestionLayoutForUILayoutType:(long long)arg1 layoutTypesForRankedSuggestions:(id)arg2 isSuggestionsWidgetLayout:(bool)arg3;
- (id)generateLayoutToSuggestionDictionary;
- (id)generateValidLayouts;
- (id)init;
- (id)initWithRankedSuggestions:(id)arg1 layoutsToConsider:(id)arg2 hyperParameters:(id)arg3 suggestionDeduplicator:(id)arg4;
- (double)marginalScoreForSuggestion:(id)arg1 topRankingSuggestion:(id)arg2;
- (void)scoreLayout:(id)arg1;
- (id)uuidOfHighestConfidenceSuggestionFromRankedSuggestions:(id)arg1 uiLayoutType:(long long)arg2;
- (double)weightForConfidenceCategory:(long long)arg1;

@end
