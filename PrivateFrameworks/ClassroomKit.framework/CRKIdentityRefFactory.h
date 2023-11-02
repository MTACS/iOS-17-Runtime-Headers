
@interface CRKIdentityRefFactory : NSObject {
    CRKIdentityConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) CRKIdentityConfiguration *configuration;

- (void).cxx_destruct;
- (const void*)CMSHashingAlgorithmForSecAlgorithm:(unsigned int)arg1;
- (void)addClientAndServerAuthEKUsToParameters:(id)arg1;
- (id)certificateParametersWithCMSAlgorithm:(const void*)arg1;
- (id)configuration;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)keyParameters;
- (struct __SecIdentity { }*)makeIdentityRefWithError:(id*)arg1;
- (void)safeRelease:(void*)arg1;
- (id)subject;

@end
