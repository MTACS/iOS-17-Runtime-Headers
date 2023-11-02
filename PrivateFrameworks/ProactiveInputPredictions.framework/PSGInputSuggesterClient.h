
@interface PSGInputSuggesterClient : NSObject <PSGInputSuggesterProtocol> {
    _PASXPCClientHelper * _clientHelper;
    PSGStructuredInfoSuggestionCache * _structuredSuggestionCache;
    _PASLRUCache * _triggeringCache;
}

+ (bool)_allowSingleCharacterContactsAutocompleteTriggerForLanguage:(id)arg1;
+ (id)_getContactsAutocompleteItemForQueryField:(id)arg1 searchTerm:(id)arg2 localeIdentifier:(id)arg3;
+ (id)_getQueryFieldFromTextContentType:(id)arg1;
+ (bool)_shouldGenerateWordBoundaryPredictionsForContext:(id)arg1 localeIdentifier:(id)arg2;
+ (bool)_zkwItemsContainsOnlyTextualResponses:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_appConnectionTriggerForTextContentType:(id)arg1;
- (id)_cachedStructuredSuggestionsForContext:(id)arg1 localeIdentifier:(id)arg2 maxSuggestions:(unsigned long long)arg3;
- (id)_combineMLAndRKItems:(id)arg1 mlItems:(id)arg2;
- (id)_fillSuggestionsForResponseItems:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 recipientNames:(id)arg4 bundleIdentifier:(id)arg5 timeoutSeconds:(double)arg6 structuredInfoFetchLimit:(unsigned long long)arg7 availableApps:(id)arg8 textualResponseLimit:(unsigned long long)arg9 structuredInfoLimit:(unsigned long long)arg10 totalSuggestionsLimit:(unsigned long long)arg11 explanationSet:(id)arg12 error:(id*)arg13;
- (id)_getFTLinkShareTrigger;
- (id)_getWordBoundaryResultForRequest:(id)arg1 explanationSet:(id)arg2;
- (id)_getZKWResultsForRequest:(id)arg1 explanationSet:(id)arg2;
- (id)_logTriggerForItems:(id)arg1 request:(id)arg2;
- (id)_maybeModifyTrigger:(id)arg1 bundleIdentifier:(id)arg2;
- (id)_remoteObjectProxy;
- (id)_responseKitPredictionsForContext:(id)arg1 bundleIdentifier:(id)arg2 conversationTurns:(id)arg3 languageID:(id)arg4 adaptationContextID:(id)arg5 shouldDisableAutoCaps:(bool)arg6 maximumResponses:(unsigned long long)arg7 isBlacklisted:(bool)arg8;
- (id)_rewriteMoneyAttributes:(id)arg1;
- (id)_rkResponsesForContext:(id)arg1 conversationTurns:(id)arg2 languageID:(id)arg3 maximumResponses:(unsigned long long)arg4 shouldDisableAutoCaps:(bool)arg5 adaptationContextID:(id)arg6;
- (id)_textualSuggestionsAndTriggersForRequest:(id)arg1 explanationSet:(id)arg2;
- (id)_wordBoundaryPredictionsForContext:(id)arg1 localeIdentifier:(id)arg2 textContentType:(id)arg3 recipientNames:(id)arg4 availableApps:(id)arg5 request:(id)arg6 explanationSet:(id)arg7;
- (id)init;
- (id)initWithStructuredInfoCache:(id)arg1;
- (void)inputSuggestionsWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)logEngagement:(id)arg1 request:(id)arg2 position:(unsigned long long)arg3;
- (void)logErrorForRequest:(id)arg1 trigger:(id)arg2 errorType:(unsigned char)arg3;
- (void)logImpression:(id)arg1 request:(id)arg2;
- (void)logPrediction:(id)arg1 request:(id)arg2 latencyMillis:(double)arg3;
- (void)logSpeedMetricForLocaleIdentifier:(id)arg1 messageDurationMilliseconds:(int)arg2 messageLength:(int)arg3 messageWords:(int)arg4;
- (void)logTrigger:(id)arg1 request:(id)arg2;
- (void)warmUpWithCompletion:(id /* block */)arg1;

@end
