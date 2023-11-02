
@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    unsigned long long  _clientType;
    NSXPCConnection * _connection;
    unsigned long long  _entitlements;
    id  _notificationObject;
    CDPWalrusDaemonService * _walrusDaemonService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowDataRecovery;
- (bool)_allowFollowUps;
- (bool)_allowRecoveryKey;
- (bool)_allowStateMachineAccess;
- (bool)_allowUtilityAccess;
- (void)_performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 errorProviuder:(id)arg4 resultParser:(id)arg5 secureBackUpController:(id)arg6 completion:(id /* block */)arg7;
- (void)_removeObserver;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1 context:(id)arg2;
- (void)_updateSOSCompatibilityMode:(bool)arg1 context:(id)arg2;
- (void)attemptToEscrowPreRecord:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)attemptToEscrowPreRecord:(id)arg1 preRecordUUID:(id)arg2 secretType:(unsigned long long)arg3 context:(id)arg4 completion:(id /* block */)arg5;
- (void)authenticateAndDeleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)authenticateAndGenerateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)broadcastWalrusStateChange;
- (void)clearFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)deleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)deviceEscrowRecordRecoverableWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)fetchEscrowRecordDevicesWithContext:(id)arg1 usingCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchTermsAcceptanceForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)finishCyrusFlowAfterTermsAgreementWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)generateEscrowRecordStatusReportForContext:(id)arg1 usingCache:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)generateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)generateRandomRecoveryKeyWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)hasLocalSecretWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3;
- (void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2 completion:(id /* block */)arg3;
- (oneway void)isOTEnabledForContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)isRecoveryKeyAvailableWithCompletion:(id /* block */)arg1;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)arg1;
- (oneway void)isWalrusRecoveryKeyAvailableWithCompletion:(id /* block */)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 uiProvider:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)pcsKeysForServices:(id)arg1 completion:(id /* block */)arg2;
- (void)performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(id /* block */)arg4;
- (oneway void)performSilentEscrowRecordRepairWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)postFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)recoverSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)repairWalrusWithCompletion:(id /* block */)arg1;
- (void)saveTermsAcceptance:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)sendEvent:(id)arg1;
- (oneway void)setKeyChainSyncCompatibilityState:(unsigned long long)arg1 withAltDSID:(id)arg2;
- (void)setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)shouldPerformAuthenticatedRepairForContext:(id)arg1 forceFetch:(bool)arg2 completion:(id /* block */)arg3;
- (void)shouldPerformRepairForContext:(id)arg1 forceFetch:(bool)arg2 completion:(id /* block */)arg3;
- (oneway void)shouldPerformSilentEscrowRecordRepairWithContext:(id)arg1 usingCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)startSilentEscrowRecordRepairWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)synchronizeUserVisibleKeychainSyncEligibilityForContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)updateWalrusStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)updateWebAccessStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (oneway void)verifyRecoveryKeyObservingSystemsHaveMatchingStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)verifyRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (oneway void)walrusStatusWithContext:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)webAccessStatusWithCompletion:(id /* block */)arg1;

@end
