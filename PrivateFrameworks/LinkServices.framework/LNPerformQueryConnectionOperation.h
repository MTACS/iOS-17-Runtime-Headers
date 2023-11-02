
@interface LNPerformQueryConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    LNQueryOutput * _output;
    LNQueryRequest * _queryRequest;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) LNQueryOutput *output;
@property (nonatomic, readonly) LNQueryRequest *queryRequest;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 query:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)output;
- (id)queryRequest;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setOutput:(id)arg1;
- (void)start;

@end
