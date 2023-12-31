
@interface ICSagaGetAccountStatusRequest : ICRequestOperation {
    bool  _canSubscribe;
    bool  _isEnabled;
    bool  _isSubscriber;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
