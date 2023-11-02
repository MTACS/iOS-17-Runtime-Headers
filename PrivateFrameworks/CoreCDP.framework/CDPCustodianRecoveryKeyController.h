
@interface CDPCustodianRecoveryKeyController : NSObject

- (bool)_isInSOSCircleWithContext:(id)arg1;
- (bool)_isSOSTrustAndSyncingEnabled;
- (void)checkCustodianRecoveryKey:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)createRecoveryKeyWithContext:(id)arg1 forUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteRecoveryKeyWithContext:(id)arg1 forUUID:(id)arg2 completion:(id /* block */)arg3;
- (void)validateRecoveryKey:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (bool)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithContext:(id)arg1 error:(id*)arg2;

@end
