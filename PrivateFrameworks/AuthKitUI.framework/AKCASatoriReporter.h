
@interface AKCASatoriReporter : AKCAReporter

- (void)didCompleteVerificationWithSuccess:(bool)arg1 duration:(unsigned long long)arg2;
- (void)didCompleteWithSuccess:(bool)arg1 authorizationAlreadyComplete:(bool)arg2;
- (void)didPerformVerificationWithSuccess:(bool)arg1 duration:(unsigned long long)arg2;
- (id)initWithRequestID:(id)arg1;

@end
