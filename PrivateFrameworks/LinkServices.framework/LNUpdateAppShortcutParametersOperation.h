
@interface LNUpdateAppShortcutParametersOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)start;

@end
