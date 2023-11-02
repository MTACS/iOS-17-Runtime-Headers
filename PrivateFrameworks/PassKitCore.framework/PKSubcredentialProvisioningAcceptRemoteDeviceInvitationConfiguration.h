
@interface PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration : PKSubcredentialProvisioningConfiguration {
    bool  _canRequestInvitation;
    bool  _declineRelatedInvitations;
    PKAppletSubcredentialSharingInvitation * _invitation;
    PKPaymentWebService * _localDeviceWebService;
    PKPaymentWebService * _remoteDeviceWebService;
}

@property (nonatomic, readonly) bool canRequestInvitation;
@property (nonatomic, readonly) bool declineRelatedInvitations;
@property (nonatomic, readonly) PKAppletSubcredentialSharingInvitation *invitation;
@property (nonatomic, readonly) PKPaymentWebService *localDeviceWebService;
@property (nonatomic, readonly) PKPaymentWebService *remoteDeviceWebService;

- (void).cxx_destruct;
- (bool)canRequestInvitation;
- (bool)declineRelatedInvitations;
- (id)description;
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(bool)arg2 declineRelatedInvitations:(bool)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5;
- (id)initWithInvitation:(id)arg1 canRequestInvitation:(bool)arg2 declineRelatedInvitations:(bool)arg3 localDeviceWebService:(id)arg4 remoteDeviceWebService:(id)arg5 configurationType:(long long)arg6;
- (id)invitation;
- (id)localDeviceWebService;
- (id)remoteDeviceWebService;
- (long long)startingState;
- (id)transitionTable;

@end
