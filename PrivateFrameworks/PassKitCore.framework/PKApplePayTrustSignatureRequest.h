
@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding> {
    NSString * _keyIdentifier;
    NSData * _manifestHash;
    NSData * _nonce;
}

@property (nonatomic, readonly, copy) NSString *keyIdentifier;
@property (nonatomic, readonly, copy) NSData *manifestHash;
@property (nonatomic, readonly, copy) NSData *nonce;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3;
- (id)keyIdentifier;
- (id)manifestHash;
- (id)nonce;

@end
