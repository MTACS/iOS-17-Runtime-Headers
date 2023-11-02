
@interface LNFetchParameterOptionDefaultValueConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation {
    LNAction * _action;
    LNActionMetadata * _actionMetadata;
    id /* block */  _completionHandler;
    NSString * _parameterIdentifier;
    LNDynamicOption * _result;
}

@property (nonatomic, copy) LNAction *action;
@property (nonatomic, copy) LNActionMetadata *actionMetadata;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSString *parameterIdentifier;
@property (nonatomic, copy) LNDynamicOption *result;

- (void).cxx_destruct;
- (id)action;
- (id)actionMetadata;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 actionMetadata:(id)arg3 parameterIdentifier:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)parameterIdentifier;
- (id)result;
- (void)setAction:(id)arg1;
- (void)setActionMetadata:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setParameterIdentifier:(id)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
