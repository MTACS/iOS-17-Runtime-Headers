
@interface WFTemperatureUnitRequest : WFTask {
    id /* block */  _resultHandler;
}

@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithResultHandler:(id /* block */)arg1;
- (bool)requiresResponse;
- (id /* block */)resultHandler;
- (void)setResultHandler:(id /* block */)arg1;
- (void)startWithService:(id)arg1;

@end
