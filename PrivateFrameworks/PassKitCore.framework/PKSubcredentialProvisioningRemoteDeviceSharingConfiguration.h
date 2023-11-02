
@interface PKSubcredentialProvisioningRemoteDeviceSharingConfiguration : PKSubcredentialProvisioningAcceptRemoteDeviceInvitationConfiguration {
    PKAppletSubcredentialSharingRequest * _sharingRequest;
    PKAppletSubcredentialSharingSession * _sharingSession;
    <PKSubcredentialProvisioningUserAuthDelegate> * _userAuthDelegate;
}

@property (nonatomic, readonly) PKAppletSubcredentialSharingRequest *sharingRequest;
@property (nonatomic, readonly) PKAppletSubcredentialSharingSession *sharingSession;
@property (nonatomic, readonly) <PKSubcredentialProvisioningUserAuthDelegate> *userAuthDelegate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSharingRequest:(id)arg1 sharingSession:(id)arg2 localDeviceWebService:(id)arg3 remoteDeviceWebService:(id)arg4 userAuthDelegate:(id)arg5;
- (id)sharingRequest;
- (id)sharingSession;
- (long long)startingState;
- (id)transitionTable;
- (id)userAuthDelegate;

@end
