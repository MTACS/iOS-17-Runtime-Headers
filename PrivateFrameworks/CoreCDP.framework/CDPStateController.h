
@interface CDPStateController : CDPController

- (void)attemptToEscrowPreRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)authenticateAndDeleteRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)authenticateAndGenerateNewRecoveryKeyWithCompletion:(id /* block */)arg1;
- (void)deleteRecoveryKey:(id /* block */)arg1;
- (bool)deleteRecoveryKeyWithError:(id*)arg1;
- (void)deviceEscrowRecordRecoverableWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchEscrowRecordDevicesWithContext:(id)arg1 usingCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id /* block */)arg1;
- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)arg1;
- (void)generateEscrowRecordReportUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (void)generateNewRecoveryKey:(id /* block */)arg1;
- (id)generateRandomRecoveryKey:(id*)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)handleURLActionWithInfo:(id)arg1;
- (void)handleURLActionWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isDeviceEscrowRecordRecoverable:(id*)arg1;
- (bool)isManateeAvailable:(id*)arg1;
- (void)isRecoveryKeyAvailableWithCompletion:(id /* block */)arg1;
- (bool)isRecoveryKeyAvailableWithError:(id*)arg1;
- (void)isWalrusRecoveryKeyAvailableWithCompletion:(id /* block */)arg1;
- (bool)isWalrusRecoveryKeyAvailableWithError:(id*)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)arg1;
- (void)recoverAndSynchronizeWithSquirrel:(id /* block */)arg1;
- (void)recoverWithSquirrel:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)setKeyChainSyncCompatibilityState:(unsigned long long)arg1 withAltDSID:(id)arg2;
- (bool)shouldPerformAuthenticatedRepairWithOptionForceFetch:(bool)arg1 error:(id*)arg2;
- (void)shouldPerformRepairWithOptionForceFetch:(bool)arg1 completion:(id /* block */)arg2;
- (bool)shouldPerformRepairWithOptionForceFetch:(bool)arg1 error:(id*)arg2;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (bool)shouldPerformSilentEscrowRecordRepairUsingCache:(bool)arg1 error:(id*)arg2;
- (void)startCircleApplicationApprovalServer:(id /* block */)arg1;
- (void)startCircleApplicationApprovalServerSkipEscrowFetches:(id /* block */)arg1;
- (void)startSilentEscrowRecordRepairWithCompletion:(id /* block */)arg1;
- (bool)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg1 error:(id*)arg2;
- (void)verifyRecoveryKey:(id /* block */)arg1;
- (bool)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithError:(id*)arg1;

@end
