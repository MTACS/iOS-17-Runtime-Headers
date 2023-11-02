
@interface DCCredentialAuthorizationToken : NSObject <NSSecureCoding> {
    NSData * _credentialAuthorizationToken;
    NSString * _credentialPairingID;
}

@property (nonatomic, readonly) NSData *credentialAuthorizationToken;
@property (nonatomic, readonly) NSString *credentialPairingID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialAuthorizationToken;
- (id)credentialPairingID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialAuthorizationToken:(id)arg1 pairingID:(id)arg2;

@end
