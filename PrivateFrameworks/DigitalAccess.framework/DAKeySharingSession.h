
@interface DAKeySharingSession : DASession <DAKeyPreTrackDataUpdate, KmlSessionCallbacks, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void)acceptCrossPlatformInvitationWithIdentifier:(id)arg1 passcode:(id)arg2 productPlanIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)acceptSharingInvitation:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)acceptSharingInvitation:(id)arg1 fromMailboxIdentifier:(id)arg2 passcode:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)acceptSharingInvitationWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)acceptSharingInvitationWithIdentifier:(id)arg1 passcode:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)acceptSharingInvitationWithIdentifier:(id)arg1 passcode:(id)arg2 productPlanIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)authorizeSharingInvitationIdentifier:(id)arg1 auth:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)cancelSharingInvitation:(id)arg1;
- (void)createSharingInvitationsForKeyIdentifier:(id)arg1 friendIdentifier:(id)arg2 auth:(id)arg3 config:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)didEnd:(id)arg1;
- (void)didStart:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getPreTrackRequestForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)ppidRequestForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)readerInformationForInvitationWithIdentifier:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestBindingAttestationDataForKeyWithIdentifier:(id)arg1 callback:(id /* block */)arg2;
- (void)requestInviteWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)retryPasscode:(id)arg1 forKeyIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendSharingInvitationForKeyIdentifier:(id)arg1 toIdsIdentifier:(id)arg2 auth:(id)arg3 config:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)sendSilentSharingInvitationWithKeyIdentifier:(id)arg1 config:(id)arg2 groupIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setBindingAttestation:(id)arg1 forKeyWithIdentifier:(id)arg2 callback:(id /* block */)arg3;
- (void)setMailboxIdentifier:(id)arg1 forOwnerKeyIdentifier:(id)arg2 forInvitationIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)startShareAcceptanceFlowWithInvitation:(id)arg1 fromMailboxIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
