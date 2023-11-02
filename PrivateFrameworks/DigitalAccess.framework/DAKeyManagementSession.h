
@interface DAKeyManagementSession : DASession <DAKeyImmobilizerTokenUpdate, DAKeyPreTrackDataUpdate, DAKeyTrackingUpdate, KmlSessionCallbacks, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)cancelAllFriendInvitationsWithCompletionHandler:(id /* block */)arg1;
- (void)cancelInvitationsWithIdentifiers:(id)arg1 sentByOwnerKeyWithIdentifier:(id)arg2 callback:(id /* block */)arg3;
- (void)countImmobilizerTokensForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)deleteKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didEnd:(id)arg1;
- (void)didStart:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endPointPrivacyDecryption:(id)arg1 encryptedData:(id)arg2 publicKey:(id)arg3 callback:(id /* block */)arg4;
- (void)getPreTrackRequestForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)listKeysWithHandler:(id /* block */)arg1;
- (void)listKeysWithSession:(id)arg1 seid:(id)arg2 callback:(id /* block */)arg3;
- (void)listReceivedSharingInvitationsWithCallback:(id /* block */)arg1;
- (void)listSharingInvitationsForKeyIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)localDeleteKey:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppidRequestForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readerInformationForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeSharedKeysWithIdentifiers:(id)arg1 ownerKeyWithIdentifier:(id)arg2 callback:(id /* block */)arg3;
- (void)removeSharingInvitationWithId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)revokeKeysWithIdentifiers:(id)arg1 sharedByOwnerKeyWithIdentifier:(id)arg2 callback:(id /* block */)arg3;
- (void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(id /* block */)arg3;
- (void)setImmobilizerTokens:(id)arg1 publicKey:(id)arg2 forKeyWithIdentifier:(id)arg3 callback:(id /* block */)arg4;
- (id)setTrackingReceipt:(id)arg1 forKeyWithIdentifier:(id)arg2;
- (id)setTrackingReceipt:(id)arg1 slotIdentifier:(id)arg2 confidentialMailboxData:(id)arg3 ephemeralPublicKey:(id)arg4 forKeyWithIdentifier:(id)arg5;
- (id)setTrackingReceipt:(id)arg1 vehicleMobilizationData:(id)arg2 forKeyWithIdentifier:(id)arg3;
- (void)signAppData:(id)arg1 appBundleIdentifier:(id)arg2 nonce:(id)arg3 auth:(id)arg4 keyIdentifier:(id)arg5 callback:(id /* block */)arg6;

@end
