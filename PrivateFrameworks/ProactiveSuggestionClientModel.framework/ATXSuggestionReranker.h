
@interface ATXSuggestionReranker : NSObject <ATXSuggestionRerankerProtocol> {
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _blendingLayerHyperParameters;
    NSDictionary * _clientModelSuggestions;
    NSString * _promotedClientModelId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientModelPriorityOrder;
- (id)constructConfidenceCategoryDictionaryForClientModelSuggestions;
- (id)convertConfidenceCategoryDictionaryToArray:(id)arg1;
- (id)init;
- (id)initWithClientModelSuggestions:(id)arg1 promoteSuggestionsFromClientModel:(id)arg2 hyperParameters:(id)arg3;
- (id)initWithProactiveSuggestions:(id)arg1 hyperParameters:(id)arg2;
- (id)initializeConfidenceCategoryToSuggestionsDictionary;
- (id)rerankedSuggestions;

@end
