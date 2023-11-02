
@interface WFAggregateForecastRequest : WFTask {
    id /* block */  _completionHandler;
    WFLocation * _location;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) WFLocation *location;

- (void).cxx_destruct;
- (void)cleanup;
- (id /* block */)completionHandler;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)location;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setLocation:(id)arg1;

@end
