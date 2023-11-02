
@interface LNOpenApplicationConnectionOperation : LNConnectionOperation {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithActionResponse:(id)arg1 error:(id)arg2;
- (void)finishWithError:(id)arg1;
- (id)initWithPriority:(long long)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
