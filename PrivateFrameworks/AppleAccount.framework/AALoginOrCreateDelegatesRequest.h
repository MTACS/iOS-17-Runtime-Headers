
@interface AALoginOrCreateDelegatesRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _parameters;
    AASigningSession * _signingSession;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
