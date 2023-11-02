
@interface PKIdentityProvisioningTransactionKey : NSObject <NSSecureCoding> {
    NSData * _authorization;
    NSData * _casdAttestation;
}

@property (nonatomic, readonly) NSData *authorization;
@property (nonatomic, readonly) NSData *casdAttestation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorization;
- (id)casdAttestation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCASDAttestation:(id)arg1 authorization:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
