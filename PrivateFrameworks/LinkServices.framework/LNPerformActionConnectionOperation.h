
@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation {
    LNAction * _action;
    id /* block */  _completionHandler;
    LNActionExecutor * _executor;
    LNSuccessResult * _result;
}

@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) LNActionExecutor *executor;
@property (nonatomic, retain) LNSuccessResult *result;

- (void).cxx_destruct;
- (id)action;
- (id /* block */)completionHandler;
- (id)executor;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 action:(id)arg2 executor:(id)arg3 executorActivity:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)result;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)start;
- (double)timeout;

@end
