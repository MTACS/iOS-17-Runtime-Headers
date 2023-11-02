
@interface PKSubcredentialInvitationFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {
    bool  _acceptLocalDeviceInvitation;
    NSError * _acceptLocalDeviceInvitationDisplayableError;
    bool  _acceptRemoteDeviceInvitation;
    NSError * _acceptRemoteDeviceInvitationDisplayableError;
    bool  _isShareActivation;
    PKAppletSubcredentialSharingInvitation * _localDeviceInvitation;
    PKAppletSubcredentialSharingInvitation * _remoteDeviceInvitation;
}

@property (nonatomic) bool acceptLocalDeviceInvitation;
@property (nonatomic, retain) NSError *acceptLocalDeviceInvitationDisplayableError;
@property (nonatomic) bool acceptRemoteDeviceInvitation;
@property (nonatomic, retain) NSError *acceptRemoteDeviceInvitationDisplayableError;
@property (nonatomic) bool isShareActivation;
@property (nonatomic, retain) PKAppletSubcredentialSharingInvitation *localDeviceInvitation;
@property (nonatomic, retain) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation;

- (void).cxx_destruct;
- (bool)acceptLocalDeviceInvitation;
- (id)acceptLocalDeviceInvitationDisplayableError;
- (bool)acceptRemoteDeviceInvitation;
- (id)acceptRemoteDeviceInvitationDisplayableError;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithInvitation:(id)arg1 localDeviceWebService:(id)arg2 remoteDeviceWebService:(id)arg3;
- (bool)isShareActivation;
- (id)localDeviceInvitation;
- (id)remoteDeviceInvitation;
- (void)setAcceptLocalDeviceInvitation:(bool)arg1;
- (void)setAcceptLocalDeviceInvitationDisplayableError:(id)arg1;
- (void)setAcceptRemoteDeviceInvitation:(bool)arg1;
- (void)setAcceptRemoteDeviceInvitationDisplayableError:(id)arg1;
- (void)setIsShareActivation:(bool)arg1;
- (void)setLocalDeviceInvitation:(id)arg1;
- (void)setRemoteDeviceInvitation:(id)arg1;

@end
