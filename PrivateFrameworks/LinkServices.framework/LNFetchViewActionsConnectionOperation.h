
@interface LNFetchViewActionsConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    NSArray * _result;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSArray *result;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)result;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResult:(id)arg1;
- (void)start;

@end
