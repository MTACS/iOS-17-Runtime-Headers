
@interface FASharedServicesRequest : AARequest {
    ACAccount * _appleAccount;
    FARequestConfigurator * _requestConfigurator;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)arg1 urlString:(id)arg2;
- (id)urlRequest;

@end
