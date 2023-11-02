
@interface AASetupAssistantSetupDelegatesRequest : AARequest {
    ACAccount * _account;
    NSDictionary * setupParameters;
    AASigningSession * signingSession;
}

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 withSetupParameters:(id)arg2 signingSession:(id)arg3;
- (id)urlRequest;
- (id)urlString;

@end
