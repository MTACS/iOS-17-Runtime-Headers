
@interface SFAutoFillPasskeyIdentifier : NSObject <NSCopying, NSSecureCoding> {
    WBSPublicKeyCredentialIdentifier * _coreIdentifier;
}

@property (nonatomic, readonly, copy) WBSPublicKeyCredentialIdentifier *coreIdentifier;
@property (nonatomic, readonly, copy) NSString *credentialID;
@property (nonatomic, readonly, copy) NSString *groupID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreIdentifier;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
