
@interface PKPaymentShareableCredential : PKPaymentCredential {
    bool  _backgroundProvisioning;
    PKEncryptedPushProvisioningTarget * _encryptedProvisioningTarget;
    NSData * _externalizedAuth;
    NSData * _passThumbnailImageData;
    NSString * _sharingInstanceIdentifier;
    long long  _source;
}

@property (getter=isBackgroundProvisioning, nonatomic, readonly) bool backgroundProvisioning;
@property (nonatomic, readonly) PKEncryptedPushProvisioningTarget *encryptedProvisioningTarget;
@property (nonatomic, retain) NSData *externalizedAuth;
@property (nonatomic, readonly) NSData *passThumbnailImageData;
@property (nonatomic, readonly) NSString *sharingInstanceIdentifier;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedProvisioningTarget;
- (id)externalizedAuth;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptedProvisioningTarget:(id)arg1 provisioningSharingIdentifier:(id)arg2 passThumbnailImageData:(id)arg3;
- (id)initWithEncryptedProvisioningTarget:(id)arg1 provisioningSharingIdentifier:(id)arg2 passThumbnailImageData:(id)arg3 isBackgroundProvisioning:(bool)arg4;
- (id)initWithProvisioningSharingIdentifer:(id)arg1 isBackgroundProvisioning:(bool)arg2;
- (bool)isBackgroundProvisioning;
- (bool)isEqual:(id)arg1;
- (id)passThumbnailImageData;
- (void)setExternalizedAuth:(id)arg1;
- (void)setSource:(long long)arg1;
- (id)sharingInstanceIdentifier;
- (long long)source;
- (bool)supportsSuperEasyProvisioning;

@end
