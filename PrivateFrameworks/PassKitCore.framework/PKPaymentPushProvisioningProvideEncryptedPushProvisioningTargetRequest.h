
@interface PKPaymentPushProvisioningProvideEncryptedPushProvisioningTargetRequest : PKPaymentWebServiceRequest {
    PKEncryptedPushProvisioningTarget * _encryptedPushProvisioningTarget;
    NSString * _sharingInstanceIdentifier;
}

@property (nonatomic, copy) PKEncryptedPushProvisioningTarget *encryptedPushProvisioningTarget;
@property (nonatomic, copy) NSString *sharingInstanceIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)encryptedPushProvisioningTarget;
- (id)initWithEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2;
- (id)requestBody;
- (void)setEncryptedPushProvisioningTarget:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (id)sharingInstanceIdentifier;

@end
