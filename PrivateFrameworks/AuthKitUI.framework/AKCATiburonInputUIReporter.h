
@interface AKCATiburonInputUIReporter : AKCAReporter

- (void)_clearMutuallyExclusiveProperties:(bool)arg1;
- (void)didComplete:(bool)arg1;
- (void)didModifyName:(bool)arg1;
- (void)didSelectAnonymousEmail:(bool)arg1;
- (void)didSelectAppleID:(bool)arg1;
- (void)didSelectPasswordCredential:(bool)arg1;
- (void)didShowAppleID:(bool)arg1;
- (id)initWithRequestID:(id)arg1;
- (void)setPasswordCredentialCount:(unsigned long long)arg1;

@end
