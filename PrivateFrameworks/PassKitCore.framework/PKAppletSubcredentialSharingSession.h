
@interface PKAppletSubcredentialSharingSession : PKDASession

@property (nonatomic, retain) DAKeySharingSession *session;

+ (id)createPendingSessionWithDelegate:(id)arg1;
+ (id)createSessionWithDelegate:(id)arg1;

- (void)acceptCrossPlatformInvitationWithIdentifier:(id)arg1 transportChannelIdentifier:(id)arg2 activationCode:(id)arg3 encryptedProductPlanIdentifierContainer:(id)arg4 completion:(id /* block */)arg5;
- (void)acceptSharingInvitation:(id)arg1 encryptedProductPlanIdentifierContainer:(id)arg2 completion:(id /* block */)arg3;
- (void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)cancelSharingInvitationWithIdentifier:(id)arg1;
- (void)createInviteForShare:(id)arg1 forCredential:(id)arg2 authorization:(id)arg3 completion:(id /* block */)arg4;
- (void)getPretrackRequestForKeyWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(id /* block */)arg3;
- (void)retryActivationCodeForCredentialIdentifier:(id)arg1 activationCode:(id)arg2 completion:(id /* block */)arg3;
- (void)routingInformationForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(id /* block */)arg3;
- (void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setTransportChannelIdentifier:(id)arg1 forCredential:(id)arg2 forCredentialShare:(id)arg3 completion:(id /* block */)arg4;
- (bool)startSession;
- (void)startShareAcceptanceFlowWithInvitation:(id)arg1 fromMailboxIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
