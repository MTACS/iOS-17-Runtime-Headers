
@interface ASPasskeyCredentialRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allowedCredentials;
    NSData * _clientDataHash;
    NSString * _relyingPartyIdentifier;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly, copy) NSArray *allowedCredentials;
@property (nonatomic, readonly, copy) NSData *clientDataHash;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly, copy) NSString *userVerificationPreference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedCredentials;
- (id)clientDataHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 clientDataHash:(id)arg2 userVerificationPreference:(id)arg3 allowedCredentials:(id)arg4;
- (id)relyingPartyIdentifier;
- (id)userVerificationPreference;

@end
