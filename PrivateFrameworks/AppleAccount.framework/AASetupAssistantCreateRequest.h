
@interface AASetupAssistantCreateRequest : AARequest {
    ACAccount * _account;
    NSDictionary * appleIDParameters;
    AASigningSession * signingSession;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)bodyDictionary;
- (id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
