
@interface CNMetricsUIReporter : CNMetricsReporter

- (id)emptyDictionaryForAction:(id)arg1 andApplication:(id)arg2;
- (id)eventKeyPrefix;
- (void)logActionDictionary:(id)arg1;
- (void)logContactShownforApplication:(id)arg1;
- (void)logSearchActionWithDictionary:(id)arg1;
- (void)logSearchResultsFetchedforApplication:(id)arg1 fromSuggestions:(bool)arg2;
- (void)logSearchResultsSelectedforApplication:(id)arg1 fromSuggestions:(bool)arg2;
- (void)logSearchUsageforApplication:(id)arg1;
- (void)logUnknownContactGeminiViewDifferentChannelSelected:(bool)arg1;

@end
