
@interface PKPaymentPushProvisioningSharingStatusRequest : PKPaymentWebServiceRequest {
    NSString * _cardConfigurationIdentifer;
    PKEncryptedPushProvisioningTarget * _encryptedProvisioningTarget;
    NSString * _sharingIdentifier;
}

@property (nonatomic, copy) NSString *cardConfigurationIdentifer;
@property (nonatomic, retain) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;
@property (nonatomic, copy) NSString *sharingIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)cardConfigurationIdentifer;
- (id)encryptedProvisioningTarget;
- (id)initWithEncryptedProvisioningTarget:(id)arg1;
- (id)initWithProvisioningSharingIdentifier:(id)arg1 cardCardConfigurationIdentifer:(id)arg2;
- (id)requestBody;
- (void)setCardConfigurationIdentifer:(id)arg1;
- (void)setEncryptedProvisioningTarget:(id)arg1;
- (void)setSharingIdentifier:(id)arg1;
- (id)sharingIdentifier;

@end
