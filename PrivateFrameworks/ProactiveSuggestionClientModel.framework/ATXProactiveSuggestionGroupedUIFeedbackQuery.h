
@interface ATXProactiveSuggestionGroupedUIFeedbackQuery : ATXProactiveSuggestionUIFeedbackQuery

- (void)enumerateGroupedUIFeedbackResultsWithBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)enumerateGroupedUIFeedbackResultsWithBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 uiFeedbackPublisherChain:(id)arg3;
- (id)initWithClientModelIds:(id)arg1 consumerSubTypeToConsider:(unsigned char)arg2 startDateForResults:(id)arg3 bookmarkURLPath:(id)arg4 hyperParameters:(id)arg5;
- (id)uiFeedbackPublisherChainForShortcutsEditor;
- (id)uiPublisherForConsumerSubType:(unsigned char)arg1 startTime:(double)arg2;

@end
