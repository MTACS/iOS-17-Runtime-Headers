
@interface PKDAManager : NSObject {
    PKDASessionManager * _managementSessionManager;
    PKDAPairingSessionManager * _pairingSessionManager;
    PKDASessionManager * _sharingSessionManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (bool)isCarKeySupportedForManufacturerIdentifier:(id)arg1 issuerIdentifier:(id)arg2 productPlanIdentifier:(id)arg3;
+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_deviceCredentialForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)acceptCrossPlatformInvitationWithIdentifier:(id)arg1 transportChannelIdentifier:(id)arg2 activationCode:(id)arg3 encryptedProductPlanIdentifierContainer:(id)arg4 completion:(id /* block */)arg5;
- (void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)createInviteForShare:(id)arg1 forCredential:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (id)createPrivacyKeyForGroupIdentifier:(id)arg1 outError:(id*)arg2;
- (void)declineSharingInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)declineSharingInvitationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)decryptData:(id)arg1 withCredential:(id)arg2 ephemeralPublicKey:(id)arg3;
- (id)decryptPayload:(id)arg1 groupIdentifier:(id)arg2 outError:(id*)arg3;
- (void)deleteCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteCredentials:(id)arg1 completion:(id /* block */)arg2;
- (bool)deletePrivacyKey:(id)arg1 outError:(id*)arg2;
- (id)description;
- (id)encryptData:(id)arg1 scheme:(id)arg2 recipientPublicKey:(id)arg3 outError:(id*)arg4;
- (void)generateSEEncryptionCertificateForSubCredentialId:(id)arg1 completion:(id /* block */)arg2;
- (void)generateTransactionKeyWithParameters:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)generateTransactionKeyWithSession:(id)arg1 seid:(id)arg2 readerIdentifier:(id)arg3 readerPublicKey:(id)arg4 completion:(id /* block */)arg5;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)handleOutstandingMessage:(id)arg1 subcredentialIdentifier:(id)arg2 credentialShareIdentifier:(id)arg3 transportIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (bool)hasLongTermPrivacyKeyForGroupIdentifier:(id)arg1;
- (void)immobilizerTokensCountForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)listCredentialsWithCompletion:(id /* block */)arg1;
- (void)listCredentialsWithSession:(id)arg1 seid:(id)arg2 completion:(id /* block */)arg3;
- (void)listDACredentialsWithSession:(id)arg1 seid:(id)arg2 completion:(id /* block */)arg3;
- (void)outstandingInvitesForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)prewarmWithManufacturerIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)privacyKeysForGroupIdentifier:(id)arg1 privacyKeyIdentifier:(id)arg2 outError:(id*)arg3;
- (void)probeTerminalForPairingStatusWithCompletion:(id /* block */)arg1;
- (void)rejectInvitation:(id)arg1 completion:(id /* block */)arg2;
- (void)removeSharedCredentialsWithIdentifiers:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)rescindInvitations:(id)arg1 onCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)retryActivationCodeForCredentialIdentifier:(id)arg1 activationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)revokeSharedCredentials:(id)arg1 onCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)routingInformationForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setTransportChannelIdentifier:(id)arg1 forCredential:(id)arg2 forCredentialShare:(id)arg3 completion:(id /* block */)arg4;
- (void)signData:(id)arg1 auth:(id)arg2 bundleIdentifier:(id)arg3 nonce:(id)arg4 credential:(id)arg5 completion:(id /* block */)arg6;
- (void)startShareAcceptanceFlowWithInvitation:(id)arg1 fromMailboxIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)statusForReceivedSharingInvitationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)statusForSentSharingInvitationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)storeSEBlobForSubcredentialIdentifier:(id)arg1 seBlob:(id)arg2;
- (void)updateTrackingAttestation:(id)arg1 forCredential:(id)arg2 encryptedContainer:(id)arg3 completion:(id /* block */)arg4;

@end
