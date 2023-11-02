
@interface LNFetchActionAppContextConnectionOperation : LNInterfaceConnectionOperation {
    LNAction * _action;
    id /* block */  _completionHandler;
    LNFocusConfigurationAppContext * _result;
}

@property (nonatomic, copy) LNAction *action;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) LNFocusConfigurationAppContext *result;

- (void).cxx_destruct;
- (id)action;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)result;
- (void)setAction:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
