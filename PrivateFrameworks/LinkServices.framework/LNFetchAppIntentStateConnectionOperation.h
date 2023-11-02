
@interface LNFetchAppIntentStateConnectionOperation : LNInterfaceConnectionOperation {
    NSArray * _appIntentIdentifiers;
    id /* block */  _completionHandler;
    NSDictionary * _results;
}

@property (nonatomic, copy) NSArray *appIntentIdentifiers;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSDictionary *results;

- (void).cxx_destruct;
- (id)appIntentIdentifiers;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 appIntentIdentifiers:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)results;
- (void)setAppIntentIdentifiers:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setResults:(id)arg1;
- (void)start;

@end
