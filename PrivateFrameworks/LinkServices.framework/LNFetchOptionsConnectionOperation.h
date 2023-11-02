
@interface LNFetchOptionsConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation {
    LNAction * _action;
    LNActionMetadata * _actionMetadata;
    id /* block */  _completionHandler;
    NSString * _localeIdentifier;
    LNDynamicOptionsProviderReference * _optionsProviderReference;
    LNActionParameterMetadata * _parameterMetadata;
    LNDynamicOptionsResult * _result;
    NSString * _searchTerm;
}

@property (nonatomic, retain) LNAction *action;
@property (nonatomic, retain) LNActionMetadata *actionMetadata;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) LNDynamicOptionsProviderReference *optionsProviderReference;
@property (nonatomic, retain) LNActionParameterMetadata *parameterMetadata;
@property (nonatomic, retain) LNDynamicOptionsResult *result;
@property (nonatomic, copy) NSString *searchTerm;

- (void).cxx_destruct;
- (id)action;
- (id)actionMetadata;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 actionMetadata:(id)arg3 parameterMetadata:(id)arg4 optionsProviderReference:(id)arg5 searchTerm:(id)arg6 localeIdentifier:(id)arg7 queue:(id)arg8 completionHandler:(id /* block */)arg9;
- (id)localeIdentifier;
- (id)optionsProviderReference;
- (id)parameterMetadata;
- (id)result;
- (id)searchTerm;
- (void)setAction:(id)arg1;
- (void)setActionMetadata:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setOptionsProviderReference:(id)arg1;
- (void)setParameterMetadata:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)start;

@end
