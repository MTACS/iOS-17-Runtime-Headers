
@interface ATXUniversalBlendingLayer : NSObject {
    <ATXBlendingLayerSessionLoggerProtocol> * _blendingSessionLogger;
    <ATXBlendingLayerDelegateProtocol> * _delegate;
    ATXUniversalBlendingFeedbackWriter * _feedbackWriter;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    NSDictionary * _layoutSelectorsForConsumerSubTypes;
    NSString * _promotedClientModelId;
    <ATXSuggestionPreprocessorProtocol> * _suggestionPreprocessor;
}

@property (nonatomic, readonly) ATXUniversalBlendingFeedbackWriter *feedbackWriter;

+ (void)logLongDescriptionForBlendingLayerString:(id)arg1 prefix:(id)arg2 shouldUseDefaultLogLevel:(bool)arg3 limit:(unsigned long long)arg4;
+ (id)validConsumerSubTypesForLayoutGeneration;

- (void).cxx_destruct;
- (id)feedbackWriter;
- (id)init;
- (id)initWithSuggestionPreprocessor:(id)arg1 delegate:(id)arg2 layoutSelectorsForConsumerSubTypes:(id)arg3 blendingSessionLogger:(id)arg4 hyperParameters:(id)arg5;
- (void)promoteSuggestionsFromClientModelWithIdentifier:(id)arg1;
- (id)rerankedSuggestions:(id)arg1;
- (id)rerankedValidSuggestionsFromClientModelSuggestions:(id)arg1;
- (id)selectedLayoutForUIConsumer:(unsigned char)arg1 rankedSuggestions:(id)arg2;
- (bool)updateCachedLayout:(id)arg1 uiConsumer:(unsigned char)arg2 clientModelSuggestions:(id)arg3;
- (void)updateSuggestionsForAllConsumerSubTypesWithClientModelSuggestions:(id)arg1;
- (bool)updateSuggestionsForConsumerSubType:(unsigned char)arg1 rankedSuggestions:(id)arg2 clientModelSuggestions:(id)arg3;
- (void)updateSuggestionsForConsumerSubTypes:(id)arg1 clientModelSuggestions:(id)arg2;

@end
