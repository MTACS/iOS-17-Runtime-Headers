
@protocol ASCredentialRequest <NSObject, NSSecureCoding, NSCopying>

@required

- (<ASCredentialIdentity> *)credentialIdentity;
- (long long)type;

@end
