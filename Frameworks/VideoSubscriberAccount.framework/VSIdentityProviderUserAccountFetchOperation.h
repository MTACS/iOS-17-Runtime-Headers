
@interface VSIdentityProviderUserAccountFetchOperation : VSAsyncOperation {
    NSError * _error;
    NSOperationQueue * _privateQueue;
    VSIdentityProvider * _provider;
    NSArray * _results;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, readonly) VSIdentityProvider *provider;
@property (nonatomic, retain) NSArray *results;

- (void).cxx_destruct;
- (id)error;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)arg1;
- (id)privateQueue;
- (id)provider;
- (id)results;
- (void)setError:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResults:(id)arg1;

@end
