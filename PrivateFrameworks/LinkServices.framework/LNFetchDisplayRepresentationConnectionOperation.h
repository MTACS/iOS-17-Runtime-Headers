
@interface LNFetchDisplayRepresentationConnectionOperation : LNInterfaceConnectionOperation {
    NSArray * _actions;
    id /* block */  _completionHandler;
    NSArray * _results;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *results;

- (void).cxx_destruct;
- (id)actions;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 actions:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)results;
- (void)setActions:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)start;

@end
