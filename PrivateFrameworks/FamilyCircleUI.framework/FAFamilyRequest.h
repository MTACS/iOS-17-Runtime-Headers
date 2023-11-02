
@interface FAFamilyRequest : AAFamilyRequest {
    ACAccount * _appleAccount;
}

@property (nonatomic, retain) ACAccount *appleAccount;

- (void).cxx_destruct;
- (void)URLRequestWithCompletion:(id /* block */)arg1;
- (void)_baseURLForEndpoint:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_configureRequest:(id)arg1 includePayload:(bool)arg2;
- (void)_decoratedURLWithCompletion:(id /* block */)arg1;
- (id)_endpoint;
- (id)_queryString;
- (id)appleAccount;
- (id)initWithGrandSlamSigner:(id)arg1;
- (void)setAppleAccount:(id)arg1;
- (id)urlRequest;

@end
