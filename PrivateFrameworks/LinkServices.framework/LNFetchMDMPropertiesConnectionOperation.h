
@interface LNFetchMDMPropertiesConnectionOperation : LNInterfaceConnectionOperation {
    NSString * _accountIdentifier;
    LNAction * _action;
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)action;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setAccountIdentifier:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)start;

@end
