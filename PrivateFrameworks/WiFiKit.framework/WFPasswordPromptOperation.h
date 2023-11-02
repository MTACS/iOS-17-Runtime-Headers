
@interface WFPasswordPromptOperation : WFUserPromptOperation <WFCredentialsProvider> {
    struct __SecIdentity { } * TLSIdentity;
    <WFCredentialsProviderContext> * _credentialsProviderContext;
    NSString * password;
    NSString * username;
}

@property (nonatomic, readonly) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic, retain) <WFCredentialsProviderContext> *credentialsProviderContext;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *username;
@property (nonatomic, readonly) bool wantsModalPresentation;

+ (id)passwordPromptOperationWithCredentialsContext:(id)arg1;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (id)credentialsProviderContext;
- (id)password;
- (void)setCredentialsProviderContext:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)username;

@end
