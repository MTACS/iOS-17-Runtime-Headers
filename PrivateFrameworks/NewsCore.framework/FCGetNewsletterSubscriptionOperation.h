
@interface FCGetNewsletterSubscriptionOperation : FCOperation {
    id /* block */  _completion;
    FCNewsletterEndpointConnection * _endpointConnection;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) FCNewsletterEndpointConnection *endpointConnection;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)endpointConnection;
- (id)initWithEndpointConnection:(id)arg1 completion:(id /* block */)arg2;
- (void)performOperation;
- (void)setCompletion:(id /* block */)arg1;
- (void)setEndpointConnection:(id)arg1;

@end
