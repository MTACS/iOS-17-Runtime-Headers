
@interface CAXSuggestionProvider : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)pingWithCompletion:(id /* block */)arg1;
- (id)predictWithPredictionContext:(id)arg1 candidateActions:(id)arg2 maxSuggestions:(unsigned long long)arg3;
- (id)proactiveSuggestionForCaxContextualAction:(id)arg1 clientModelSpec:(id)arg2;
- (void)recordShortcutsEditorEvent:(id)arg1;
- (void)registerModelForRealTimeRequestsWithBlendingLayerServer:(id)arg1;
- (void)suggestionsForContextualActionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;

@end
