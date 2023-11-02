
@interface DCCredentialTrust : NSObject <NSSecureCoding> {
    bool  _credentialAccessibilityEnabled;
    NSData * _credentialBAACertificate;
    NSData * _credentialKeyBlob;
    NSString * _credentialPairingID;
}

@property (nonatomic, readonly) bool credentialAccessibilityEnabled;
@property (nonatomic, readonly) NSData *credentialBAACertificate;
@property (nonatomic, readonly) NSData *credentialKeyBlob;
@property (nonatomic, readonly) NSString *credentialPairingID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)credentialAccessibilityEnabled;
- (id)credentialBAACertificate;
- (id)credentialKeyBlob;
- (id)credentialPairingID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialKeyBlob:(id)arg1 baaCertificate:(id)arg2 pairingID:(id)arg3 isAccessibilityEnabled:(bool)arg4;

@end
