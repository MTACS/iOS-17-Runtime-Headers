
@interface PKAppletSubcredentialSharingInvitationRequest : NSObject <NSSecureCoding> {
    NSString * _credentialIdentifier;
    long long  _deviceType;
    NSString * _sharedCredentialIdentifier;
    NSUUID * _sharingSessionIdentifier;
}

@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic) long long deviceType;
@property (nonatomic, copy) NSString *sharedCredentialIdentifier;
@property (nonatomic, retain) NSUUID *sharingSessionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialIdentifier;
- (id)description;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCredentialIdentifier:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setSharedCredentialIdentifier:(id)arg1;
- (void)setSharingSessionIdentifier:(id)arg1;
- (id)sharedCredentialIdentifier;
- (id)sharingSessionIdentifier;

@end
