
@interface PKPushProvisioningSharingMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _createdAt;
    NSString * _credentialAuthorityIdentifier;
    NSString * _provisioningCredentialHash;
    unsigned long long  _securityOptions;
    NSString * _sharingInstanceIdentifier;
    unsigned long long  _sharingStatus;
    long long  _source;
}

@property (nonatomic, readonly) bool allowProvisioningOnLockedDevice;
@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSString *credentialAuthorityIdentifier;
@property (nonatomic, copy) NSString *provisioningCredentialHash;
@property (nonatomic) unsigned long long securityOptions;
@property (nonatomic, copy) NSString *sharingInstanceIdentifier;
@property (nonatomic) unsigned long long sharingStatus;
@property (nonatomic) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowProvisioningOnLockedDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)credentialAuthorityIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEncryptedProvisioningTarget:(id)arg1;
- (id)provisioningCredentialHash;
- (unsigned long long)securityOptions;
- (void)setCreatedAt:(id)arg1;
- (void)setCredentialAuthorityIdentifier:(id)arg1;
- (void)setProvisioningCredentialHash:(id)arg1;
- (void)setSecurityOptions:(unsigned long long)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setSharingStatus:(unsigned long long)arg1;
- (void)setSource:(long long)arg1;
- (id)sharingInstanceIdentifier;
- (unsigned long long)sharingStatus;
- (long long)source;

@end
