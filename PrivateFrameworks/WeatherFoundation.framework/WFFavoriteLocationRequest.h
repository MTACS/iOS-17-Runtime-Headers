
@interface WFFavoriteLocationRequest : WFTask {
    id /* block */  _resultHandler;
}

@property (nonatomic, readonly) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithResultHandler:(id /* block */)arg1;
- (id /* block */)resultHandler;
- (void)startWithService:(id)arg1;

@end
