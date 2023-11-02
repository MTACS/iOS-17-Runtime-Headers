
@interface ICUserAuthenticationValidationRequest : NSObject {
    ICStoreRequestContext * _requestContext;
}

- (void).cxx_destruct;
- (id)initWithRequestContext:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (void)performWithCompletion:(id /* block */)arg1;

@end
