
@interface _PSKNNZKWATXDelegateWrapper : NSObject <ATXProactiveSuggestionRealTimeProviderDelegateProtocol, _PSFaceTimeZKWWrapperProtocol> {
    long long  _defaultConfidenceCategory;
    bool  _isEnabled;
    _PSKNNModel * _knnModel;
    unsigned long long  _maxSuggestions;
    _PSKNNModelConfiguration * _modelConfiguration;
    long long  _modelType;
    NSArray * _transformers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_getInteractionFilterForPrimaryInteractionsModel;
- (id)getSuggestionsWithPredictionContext:(id)arg1;
- (id)initWithKNNModel:(id)arg1 fallbackInteractionConfig:(id)arg2;
- (id)initWithKNNModel:(id)arg1 modelType:(long long)arg2 modelConfiguration:(id)arg3 maxSuggestions:(unsigned long long)arg4 transformers:(id)arg5 isEnabled:(bool)arg6 defaultConfidenceCategory:(long long)arg7;
- (id)initWithKNNModel:(id)arg1 primaryInteractionsConfig:(id)arg2;
- (void)pingWithCompletion:(id /* block */)arg1;
- (void)suggestionsForInteractionSuggestionRequest:(id)arg1 clientModelId:(id)arg2 reply:(id /* block */)arg3;
- (void)updateWithFallbackInteractionsConfig:(id)arg1;
- (void)updateWithPrimaryInteractionsConfig:(id)arg1;

@end
