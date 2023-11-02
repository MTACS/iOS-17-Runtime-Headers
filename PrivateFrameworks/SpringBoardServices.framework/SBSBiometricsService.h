
@interface SBSBiometricsService : SBSAbstractSystemService

- (void)_acquireBiometricAssertionOfType:(unsigned char)arg1 assertionName:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)acquireUnlockSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)acquireWalletPreArmSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)arg1;

@end
