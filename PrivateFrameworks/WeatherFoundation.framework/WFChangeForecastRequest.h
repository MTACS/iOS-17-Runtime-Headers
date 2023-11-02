
@interface WFChangeForecastRequest : WFTask {
    id /* block */  _completionHandler;
    WFLocation * _location;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) WFLocation *location;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)initWithLocation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)location;
- (void)startWithService:(id)arg1;

@end
