
@interface PKSubcredentialProvisioningAcceptInvitationConfiguration : PKSubcredentialProvisioningLocalDeviceConfiguration {
    bool  _declineRelatedInvitations;
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKAppletSubcredentialSharingInvitationMetadata * _metadata;
    PKPaymentWebService * _remoteDeviceWebService;
    PKAppletSubcredentialSharingSession * _session;
}

@property (nonatomic, readonly) bool declineRelatedInvitations;
@property (nonatomic, readonly) PKAppletSubcredentialSharingInvitation *invitation;
@property (nonatomic, readonly) PKAppletSubcredentialSharingInvitationMetadata *metadata;
@property (nonatomic, readonly) PKPaymentWebService *remoteDeviceWebService;
@property (nonatomic, readonly) PKAppletSubcredentialSharingSession *session;

- (void).cxx_destruct;
- (bool)declineRelatedInvitations;
- (id)description;
- (id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 declineRelatedInvitations:(bool)arg4 localDeviceWebService:(id)arg5 remoteDeviceWebService:(id)arg6;
- (id)initWithSession:(id)arg1 invitation:(id)arg2 metadata:(id)arg3 webService:(id)arg4;
- (id)invitation;
- (id)metadata;
- (id)remoteDeviceWebService;
- (id)session;
- (long long)startingState;
- (id)transitionTable;

@end
