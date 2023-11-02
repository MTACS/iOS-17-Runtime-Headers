
@interface DCCredentialNonce : NSObject <NSSecureCoding> {
    NSData * _credentialNonce;
}

@property (nonatomic, readonly) NSData *credentialNonce;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)credentialNonce;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialNonce:(id)arg1;

@end
