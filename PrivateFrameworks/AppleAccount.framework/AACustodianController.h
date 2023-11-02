
@interface AACustodianController : NSObject {
    AACustodianDaemonConnection * _daemonConnection;
    NSData * _encryptedPRKC;
    NSString * _ownerCustodianAltDSID;
}

- (void).cxx_destruct;
- (void)availableRecoveryFactorsWithCompletion:(id /* block */)arg1;
- (bool)cancelCustodianRecoveryWithSessionID:(id)arg1 error:(id*)arg2;
- (void)displayInvitationUIWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)displayTrustedContactFlowWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCustodianHealthStatusWithCompletion:(id /* block */)arg1;
- (void)fetchCustodianPasswordResetInformationWithSessionID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCustodianRecoveryConfigurationWithCompletion:(id /* block */)arg1;
- (void)fetchCustodianRecoveryKeysWithSessionID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchCustodianshipInfoWithCompletion:(id /* block */)arg1;
- (void)fetchCustodianshipInfoWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchSuggestedCustodiansWithCompletion:(id /* block */)arg1;
- (void)fetchTrustedContactsWithCompletion:(id /* block */)arg1;
- (void)generateCustodianRecoveryCodeWithContext:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDaemonXPCEndpoint:(id)arg1;
- (void)performTrustedContactsDataSyncWithCompletion:(id /* block */)arg1;
- (void)pullTrustedContactsFromCloudKitWithCompletion:(id /* block */)arg1;
- (void)reSendCustodianInvitationWithCustodianID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeCustodian:(id)arg1 completion:(id /* block */)arg2;
- (void)respondToCustodianRequestWithResponse:(id)arg1 completion:(id /* block */)arg2;
- (void)setupCustodianshipWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)startCustodianRecoveryWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)startHealthCheckWithCompletion:(id /* block */)arg1;
- (void)startManateeMigrationWithCompletion:(id /* block */)arg1;
- (void)stopBeingCustodian:(id)arg1 completion:(id /* block */)arg2;
- (void)validateCustodianRecoveryCodeWithContext:(id)arg1 completion:(id /* block */)arg2;

@end
