
@interface PKSubcredentialPairingFlowControllerContext : PKSubcredentialProvisioningFlowControllerContext <NSCopying> {
    PKEntitlementWhitelist * _appEntitlementWhitelist;
    PKAddCarKeyPassConfiguration * _configuration;
    PKAppletSubcredential * _credentialToShare;
    bool  _declineRelatedInvitations;
    bool  _passwordManuallyEntered;
    PKPaymentProvisioningController * _provisioningController;
    unsigned long long  _referralSource;
    PKAppletSubcredentialSharingInvitation * _remoteDeviceInvitation;
    PKAppletSubcredentialSharingRequest * _remoteDeviceSharingRequest;
    bool  _shouldRequestInvitation;
}

@property (nonatomic, retain) PKEntitlementWhitelist *appEntitlementWhitelist;
@property (nonatomic, retain) PKAddCarKeyPassConfiguration *configuration;
@property (nonatomic, retain) PKAppletSubcredential *credentialToShare;
@property (nonatomic) bool declineRelatedInvitations;
@property (nonatomic) bool passwordManuallyEntered;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, readonly) unsigned long long referralSource;
@property (nonatomic, retain) PKAppletSubcredentialSharingInvitation *remoteDeviceInvitation;
@property (nonatomic, retain) PKAppletSubcredentialSharingRequest *remoteDeviceSharingRequest;
@property (nonatomic) bool shouldRequestInvitation;

- (void).cxx_destruct;
- (id)appEntitlementWhitelist;
- (id)brandId;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialToShare;
- (bool)declineRelatedInvitations;
- (id)initWithFlowType:(long long)arg1 referralSource:(unsigned long long)arg2;
- (bool)passwordManuallyEntered;
- (id)provisioningController;
- (unsigned long long)referralSource;
- (id)remoteDeviceInvitation;
- (id)remoteDeviceSharingRequest;
- (void)setAppEntitlementWhitelist:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCredentialToShare:(id)arg1;
- (void)setDeclineRelatedInvitations:(bool)arg1;
- (void)setPasswordManuallyEntered:(bool)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setRemoteDeviceInvitation:(id)arg1;
- (void)setRemoteDeviceSharingRequest:(id)arg1;
- (void)setShouldRequestInvitation:(bool)arg1;
- (bool)shouldRequestInvitation;

@end
