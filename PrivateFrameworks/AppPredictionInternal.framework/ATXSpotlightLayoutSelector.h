
@interface ATXSpotlightLayoutSelector : NSObject <ATXLayoutSelectorProtocol> {
    ATXSpotlightContextAdapter * _adapter;
    <ATXUniversalSuggestionDeduplicatorProtocol> * _deduplicator;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_commuteWildcardReducer:(id)arg1;
+ (bool)_isCommuteMediaSuggestion:(id)arg1;
+ (bool)_isCommuteWildCardSuggestion:(id)arg1;

- (void).cxx_destruct;
- (double)_adaptedScoreForSuggestion:(id)arg1;
- (id)_autoShortcutsForBundleId:(id)arg1 provider:(id)arg2;
- (id)_clearDuplicateContextsFromSuggestions:(id)arg1 suggestionDict:(id)arg2;
- (id)_collectionsWithSuggestions:(id)arg1;
- (long long)_contextReasonCodeWithPredictionReasons:(unsigned long long)arg1;
- (id)_createPOISuggestionWithMUID:(id)arg1 fromHeroSuggestion:(id)arg2;
- (id)_createTopAppShortcutCollectionsWithSuggestions:(id)arg1;
- (id)_createTopAppShortcutSuggestions;
- (void)_dedupeSuggestions:(id)arg1 suggestionDict:(id)arg2;
- (bool)_hasNilTitleForContextCode:(long long)arg1;
- (id)_heroDataReducer:(id)arg1;
- (void)_indexSpotlightActions:(id)arg1;
- (id)_insertMediaSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)_intervalStringWithCriteria:(id)arg1;
- (bool)_isValidForReasons:(unsigned long long)arg1;
- (id)_poiMUIDFromHero:(id)arg1;
- (id)_preferredContextWithContextCode:(id)arg1 contextCriteria:(id)arg2;
- (id)_rankedReasonCodes;
- (id)_scoresFlattenForCollections:(id)arg1;
- (id)_staticTitleForContextCode:(long long)arg1;
- (id)_suggestionFromAutoShortcutContextualAction:(id)arg1 title:(id)arg2 predictionReasons:(unsigned long long)arg3;
- (unsigned long long)_supportedContextReasons;
- (id)_titleForContextCode:(long long)arg1 suggestions:(id)arg2;
- (id)_titleForParameterizedAutoShortcutContextualAction:(id)arg1 provider:(id)arg2;
- (id)_validAutoShortcutContextualActionsForBundleId:(id)arg1 limit:(unsigned long long)arg2 provider:(id)arg3;
- (id)init;
- (id)initWithSuggestionDeduplicator:(id)arg1 hyperParameters:(id)arg2;
- (id)nsuaFilteredLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (id)selectedLayoutForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2;

@end
